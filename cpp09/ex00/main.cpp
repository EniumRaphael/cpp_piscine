/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:15:32 by rparodi           #+#    #+#             */
/*   Updated: 2025/04/11 12:38:36 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <unistd.h>


std::map<std::string, float>parse_file(std::string name) {
	std::map<std::string, float> to_ret;
	std::string tmpLine;
	std::ifstream file(name);
	size_t line = 1;

	while (std::getline(file, tmpLine)) {
		std::size_t limit = tmpLine.find(" | ");
		if (limit == std::string::npos) {
			std::cerr << CLR_RED << "Limiter not found at the line " << line << CLR_RESET << std::endl;
			exit(1);
		} else {
			std::string tmpDate = tmpLine.substr(0, limit);
			float tmpValue = std::atof(tmpLine.substr(limit + 3).c_str());
			to_ret.insert(std::pair<std::string, float>(tmpDate, tmpValue));
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
		std::cerr << CLR_RED << "The file `data.csv` have to exist (to take it from the insta make get_db)" << CLR_RESET << std::endl;
		exit(1);
	}
	if (access("data.csv", R_OK)) {
		std::cerr << CLR_RED << "The program have to read on the file `data.csv`" << CLR_RESET << std::endl;
		exit( 1);
	}
	std::map<std::string, float> user_db = parse_file(argv[1]);
}
