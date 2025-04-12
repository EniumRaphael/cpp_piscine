/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:15:32 by rparodi           #+#    #+#             */
/*   Updated: 2025/04/12 18:07:03 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cmath>
#include <regex.h>
#include <iomanip>
#include <sstream>

enum error_code {
	NO_ERROR = 0,
	NEGATIVE,
	NO_FORMAT,
	NO_DATE,
	NO_FLOAT,
	NO_LIMIT,
	TOO_LARGE
};

typedef struct s_value {
	enum error_code reason;
	float value;
	std::string date;
} value;

value convertValue (enum error_code error, float value, std::string date) {
	s_value to_return;
	to_return.reason = error;
	to_return.value = value;
	to_return.date = date;
	return to_return;
}

std::string error_code_to_string(enum error_code code) {
	switch (code) {
		case NO_ERROR:
			return "NO_ERROR";
		case NEGATIVE:
			return "NEGATIVE";
		case NO_FORMAT:
			return "NO_FORMAT";
		case NO_DATE:
			return "NO_DATE";
		case NO_LIMIT:
			return "NO_LIMIT";
		case NO_FLOAT:
			return "NO_FLOAT";
		case TOO_LARGE:
			return "TOO_LARGE";
		default:
			return "UNKNOWN";
	}
}

void debug_print_map(const std::map<size_t, value>& data) {
	std::cout << "===== Debug: Contents of map =====" << std::endl;
	std::cout << std::left
		<< std::setw(15) << "Key"
		<< std::setw(10) << "Value"
		<< std::setw(15) << "Date"
		<< std::setw(15) << "Reason"
		<< std::endl;

	std::cout << std::string(40, '-') << std::endl;

	for (std::map<size_t, value>::const_iterator it = data.begin(); it != data.end(); ++it) {
		std::cout << std::left
			<< std::setw(15) << it->first
			<< std::setw(10) << std::fixed << std::setprecision(2) << it->second.value
			<< std::setw(15) << std::fixed << it->second.date
			<< std::setw(15) << error_code_to_string(it->second.reason)
			<< std::endl;
	}

	std::cout << "===================================" << std::endl;
}

std::string itoa_home(int i) {
	std::ostringstream oss;
	oss << "0000" << i;
	return oss.str();
}


bool is_valid_format_date(std::string str)  {
	regex_t regex;

	int ret = regcomp(&regex, "^[0-9]{4}-[0-9]{2}-[0-9]{2}$", REG_EXTENDED);
	if (ret)
		return false;

	ret = regexec(&regex, str.c_str(), 0, NULL, 0);
	if (ret)
		return false;
	regfree(&regex);
	return true;
}

std::string check_date(std::string name, enum error_code *error_code) {
	if (!is_valid_format_date(name)) {
		*error_code = NO_FORMAT;
		return (name);
	}
	std::string year = name.substr(0, 4);
	std::string month = name.substr(5, 2);
	if (month > "12") {
		*error_code = NO_DATE;
		return (name);
	}
	std::string day = name.substr(8, 2);
	if (day > "28") {
		if (month == "02" && day == "29") {
			if ((atoi(year.c_str()) % 4 == 0) && (atoi(year.c_str()) % 100 != 0 || atoi(year.c_str()) % 400 == 0))
				*error_code = NO_DATE;
		}
		else {
			std::string month_30[] = {"04", "06", "09", "11"};
			for (int i = 0; i < 4; i++) {
				if (month == month_30[i] && day > "30") {
					*error_code = NO_DATE;
				}
			}
		}
	}
	return (name);
}

float	check_value(std::string value, enum error_code *error_code) {
	bool has_dot = false;
	if (value.at(0) == '-') {
		*error_code = NEGATIVE;
		return 0;
	}
	for (size_t i = 0; i < value.length(); i++) {
		if (value[i] == '.') {
			if (has_dot == true) {
				*error_code = NO_FLOAT;
				return 0;
			}
			has_dot = true;
			continue;
		}
		if (isdigit(value[i]) == false) {
			*error_code = NO_FLOAT;
			return 0;
		}
	}
	if (value.size() >= 4 || atof(value.c_str()) > 1000) {
		*error_code = TOO_LARGE;
		return 0;
	}
	return (atof(value.c_str()));
}

std::map<size_t, value>parse_input(std::string name) {
	enum error_code tmpError;

	std::ifstream file(name.c_str());

	std::map<size_t, value> to_ret;

	std::string tmpLine;
	std::string tmpDate;
	float tmpValue = 0; 
	size_t line = 0;

	while (std::getline(file, tmpLine)) {
		line++;
		tmpError = NO_ERROR;
		tmpDate.clear();
		tmpValue = 0;
		std::size_t limit = tmpLine.find(" | ");
		if (limit == std::string::npos) {
			tmpError = NO_FORMAT;
			to_ret.insert(std::make_pair(line, convertValue(tmpError, tmpValue, tmpLine)));
		} else {
			tmpDate = check_date(tmpLine.substr(0, limit), &tmpError);
			tmpValue = check_value(tmpLine.substr(limit + 3).c_str(), &tmpError);
			to_ret.insert(std::make_pair(line, convertValue(tmpError, tmpValue, tmpDate)));
		}
	}
	return to_ret;
}

int	main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cerr << CLR_RED << "Usage: " << argv[0] << " <filename>" << CLR_RESET << std::endl;
		exit(1);
	}
	if (access(argv[1], F_OK)) {
		std::cerr << CLR_RED << "The file given in arguments have to exist" << CLR_RESET << std::endl;
		exit(1);
	}
	if (access(argv[1], R_OK)) {
		std::cerr << CLR_RED << "The file given in arguments have to be readable by the owner" << CLR_RESET << std::endl;
		exit( 1);
	}
	if (access("data.csv", F_OK)) {
		std::cerr << CLR_RED << "The file `data.csv` have to exist (to take it from the intra `make get_db`)" << CLR_RESET << std::endl;
		exit(1);
	}
	if (access("data.csv", R_OK)) {
		std::cerr << CLR_RED << "The program have to read on the file `data.csv`" << CLR_RESET << std::endl;
		exit( 1);
	}
	std::map<size_t, value> user_db = parse_input(argv[1]);
	debug_print_map(user_db);
}
