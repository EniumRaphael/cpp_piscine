/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:15:32 by rparodi           #+#    #+#             */
/*   Updated: 2025/04/13 17:41:41 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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
			return "\033[0;35mNO_ERROR";
		case NEGATIVE:
			return "\033[0;31mNEGATIVE";
		case NO_FORMAT:
			return "\033[0;31mNO_FORMAT";
		case NO_DATE:
			return "\033[0;31mNO_DATE";
		case NO_LIMIT:
			return "\033[0;31mNO_LIMIT";
		case NO_FLOAT:
			return "\033[0;31mNO_FLOAT";
		case TOO_LARGE:
			return "\033[0;31mTOO_LARGE";
		default:
			return "UNKNOWN";
	}
}

void _debug_print_db(const std::map<std::string, float>& data) {
	std::cout << std::endl << std::left
		<< "\t   " << CLR_YELLOW << "Value" << CLR_RESET
		<< "\t" << CLR_YELLOW << "Date" << CLR_RESET
		<< std::endl;

	std::cout << CLR_BLUE << std::string(50, '-') << CLR_RESET << std::endl;

	for (std::map<std::string, float>::const_iterator it = data.begin(); it != data.end(); ++it) {
		std::cout << std::left
			<< "\t " << CLR_GOLD << it->first << CLR_RESET
			<< "\t" << CLR_GREEN << std::fixed << std::setprecision(2) << it->second << CLR_RESET
			<< std::endl;
	}
}

void _debug_print_input(const std::map<size_t, value>& data) {
	std::cout << std::endl << std::left
		<< "\t" << CLR_YELLOW << "Key" << CLR_RESET
		<< "\t" << CLR_YELLOW << "Value" << CLR_RESET
		<< "\t   " << CLR_YELLOW << "Date" << CLR_RESET
		<< "\t\t" << CLR_YELLOW << "Reason"<< CLR_RESET
		<< std::endl;

	std::cout << CLR_BLUE << std::string(50, '-') << CLR_RESET << std::endl;

	for (std::map<size_t, value>::const_iterator it = data.begin(); it != data.end(); ++it) {
		if (it->first != 0) {
			std::cout << std::left
				<< "\t " << CLR_GOLD << it->first << CLR_RESET
				<< "\t" << CLR_GREEN << std::fixed << std::setprecision(2) << it->second.value << CLR_RESET
				<< "\t" << CLR_CYAN << std::fixed << it->second.date << CLR_RESET
				<< "\t" << error_code_to_string(it->second.reason) << CLR_RESET
				<< std::endl;
		}
	}
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

std::string nb_len(std::string nb) {
	size_t first_non_zero = nb.find_first_not_of('0');
	if (first_non_zero == std::string::npos)
		return "0";
	return nb.substr(first_non_zero);
}

float	check_value(bool more_than_1000, std::string value, enum error_code *error_code) {
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
	if (more_than_1000 == false && (nb_len(value).size() >= 4 || atof(value.c_str()) > 1000)) {
		*error_code = TOO_LARGE;
		return 0;
	}
	return (atof(value.c_str()));
}

std::map<size_t, value>parse_input(std::string name) {
	enum error_code tmpError = NO_ERROR;

	std::ifstream file(name.c_str());

	std::map<size_t, value> to_ret;
	size_t line = 0;

	std::string tmpLine;
	std::string tmpDate;
	float tmpValue = 0; 

	std::getline(file, tmpLine);
	if (tmpLine != "date | value") {
		std::cerr << CLR_RED << "The first line of the file have to be `date | value`" << CLR_RESET << std::endl;
		exit(1);
	}
	while (std::getline(file, tmpLine)) {
		tmpError = NO_ERROR;
		tmpDate.clear();
		tmpValue = 0;
		std::size_t limit = tmpLine.find(" | ");
		if (limit == std::string::npos) {
			tmpError = NO_FORMAT;
			to_ret.insert(std::make_pair(line, convertValue(tmpError, tmpValue, tmpLine)));
		} else {
			tmpDate = check_date(tmpLine.substr(0, limit), &tmpError);
			tmpValue = check_value(false, tmpLine.substr(limit + 3).c_str(), &tmpError);
			to_ret.insert(std::make_pair(line, convertValue(tmpError, tmpValue, tmpDate)));
		}
		line++;
	}
	return to_ret;
}

void print_result(std::map<size_t, value> input, std::map<std::string, float> db) {
	std::map<size_t, value>::iterator it_input = input.begin();
	std::map<std::string, float>::iterator it_db = db.begin();

	while (it_input != input.end()) {
		if (it_input->second.reason == NO_ERROR) {
			while (it_db != db.end() && it_input->second.date > it_db->first)
				it_db++;
			if (it_db == db.begin()) {
				it_db--;
			}
			if (it_db == db.end()) {
				std::cerr << CLR_MAGENTA << it_input->second.date << CLR_RED << " => no data found" << CLR_RESET << std::endl;
			} else {
				std::cout << it_input->second.date << " => " << it_input->second.value << " = " << it_input->second.value * it_db->second << std::endl;
			}
		}
		else {
			switch (it_input->second.reason) {
				case NEGATIVE:
					std::cerr << CLR_MAGENTA << it_input->second.date << CLR_RED << " => is negative" << CLR_RESET << std::endl;
					break;
				case NO_FORMAT:
					std::cerr << CLR_MAGENTA << it_input->second.date << CLR_RED << " => bad format" << CLR_RESET << std::endl;
					break;
				case NO_DATE:
					std::cerr << CLR_MAGENTA << it_input->second.date << CLR_RED << " => bad date" << CLR_RESET << std::endl;
					break;
				case NO_FLOAT:
					std::cerr << CLR_MAGENTA << it_input->second.date << CLR_RED << " => bad value" << CLR_RESET << std::endl;
					break;
				case NO_LIMIT:
					std::cerr << CLR_MAGENTA << it_input->second.date << CLR_RED << " => bad input" << CLR_RESET << std::endl;
					break;
				case TOO_LARGE:
					std::cerr << CLR_MAGENTA << it_input->second.date << CLR_RED << " => value too large" << CLR_RESET << std::endl;
					break;
				default:
					break;
			}
		}
		it_input++;
	}
}

std::map<std::string, float> get_db() {
	enum error_code tmpError = NO_ERROR;
	std::map<std::string, float> to_ret;

	std::ifstream file("data.csv");
	std::string tmpLine = "";
	std::string tmpDate = "";
	std::getline(file, tmpLine);
	float tmpValue = 0;

	while (std::getline(file, tmpLine)) {
		tmpDate.clear();
		tmpValue = 0;
		std::size_t limit = tmpLine.find(",");

		if (limit != std::string::npos) {
			tmpDate = check_date(tmpLine.substr(0, limit), &tmpError);
			tmpValue = check_value(true, tmpLine.substr(limit + 1).c_str(), &tmpError);
			if (tmpError != NEGATIVE)
				to_ret.insert(std::make_pair(tmpDate, tmpValue));
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
		exit(1);
	}
	if (access("data.csv", F_OK)) {
		std::cerr << CLR_RED << "The file `data.csv` have to exist (to take it from the intra `make get_db`)" << CLR_RESET << std::endl;
		exit(1);
	}
	if (access("data.csv", R_OK)) {
		std::cerr << CLR_RED << "The program have to read on the file `data.csv`" << CLR_RESET << std::endl;
		exit(1);
	}
	std::map<size_t, value> user_db = parse_input(argv[1]);
	 // _debug_print_input(user_db);
	std::map<std::string, float> value_db = get_db();
	// _debug_print_db(value_db);
	print_result(user_db, value_db);
}
