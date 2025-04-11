/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:15:32 by rparodi           #+#    #+#             */
/*   Updated: 2025/04/11 15:07:21 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cmath>
#include <regex.h>

enum error_code {
	NO_ERROR = 0,
	NEGATIVE,
	NO_FORMAT,
	NO_DATE,
	NO_LIMIT,
	TOO_LARGE
};

typedef struct s_value {
	enum error_code reason;
	float value;
} value;

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

value convertValue (enum error_code error, float value) {
	s_value to_return;
	to_return.reason = error;
	to_return.value = value;
	return to_return;
}

std::map<std::string, value>parse_input(std::string name) {
	enum error_code tmpError;

	std::ifstream file(name.c_str());

	std::map<std::string, value> to_ret;

	std::string tmpLine;
	std::string tmpDate;
	float tmpValue = 0; 

	while (std::getline(file, tmpLine)) {
		tmpError = NO_ERROR;
		std::size_t limit = tmpLine.find(" | ");
		if (limit == std::string::npos) {
			tmpError = NO_FORMAT;
		} else {
			tmpDate = check_date(tmpLine.substr(0, limit), &tmpError);
			if (tmpError == NO_ERROR) {
				tmpValue = std::atof(tmpLine.substr(limit + 3).c_str());
			}
		}
		to_ret.insert(std::pair<std::string, value>(tmpDate, convertValue(tmpError, tmpValue)));
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
		std::cerr << CLR_RED << "The file `data.csv` have to exist (to take it from the intra make get_db)" << CLR_RESET << std::endl;
		exit(1);
	}
	if (access("data.csv", R_OK)) {
		std::cerr << CLR_RED << "The program have to read on the file `data.csv`" << CLR_RESET << std::endl;
		exit( 1);
	}
	std::map<std::string, value> user_db = parse_input(argv[1]);
}
