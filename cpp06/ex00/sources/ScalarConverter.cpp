/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 16:41:16 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/21 15:49:00 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include <cstdlib>
#include <sstream>
#include <string>

ScalarConverter::ScalarConverter() {
	std::cout << "[ScalarConverter] Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &copy) {
	std::cout << "[ScalarConverter] Copy constructor called" << std::endl;
	*this = copy;
}

ScalarConverter::~ScalarConverter() {
	std::cout << "[ScalarConverter] Destructor called" << std::endl;
}

ScalarConverter& ScalarConverter::operator = (ScalarConverter const &assign) {
	std::cout << "[ScalarConverter] Assignation operator called" << std::endl;
	(void)assign;
	return *this;
}

bool isChar(std::string *input) {
	if (input->length() == 1 && std::isprint(input->at(0)))
		return true;
	if (input->length() == 1 && std::isprint(input->at(0))) {
		std::cerr << "Please note that non-displayable characters shouldn’t be used as inputs." << std::endl;
		return false;
	}
	return false;
}

bool isInt(std::string *input) {
	for (size_t i = 0; i < input->length(); i++) {
		if (!std::isdigit(input->at(i))) {
			return false;
		}
	}
	std::ostringstream oss;
	try {
		oss << std::stoi(*input);
	} catch (std::exception &e) {
		return false;
	}
	return true;
}

bool isFloat(std::string *input) {
	std::ostringstream oss;
	try {
		oss << std::stof(*input);
	} catch (std::exception &e) {
		return false;
	}
	return true;
}

bool isDouble(std::string *input) {
	std::ostringstream oss;
	try {
		oss << std::stod(*input);
	} catch (std::exception &e) {
		return false;
	}
	return true;
}

void ScalarConverter::convert(std::string *input) {
	std::cout << "Input:\t\t" << *input << std::endl;
	std::cout << "IsChar:\t\t" << (isChar(input) ? "✅ | true" : "❌ | false") << std::endl;
	std::cout << "IsInt:\t\t" << (isInt(input) ? "✅ | true" : "❌ | false") << std::endl;
	std::cout << "IsFloat:\t" << (isFloat(input) ? "✅ | true" : "❌ | false") << std::endl;
	std::cout << "IsDouble:\t" << (isDouble(input) ? "✅ | true" : "❌ | false") << std::endl;
}
