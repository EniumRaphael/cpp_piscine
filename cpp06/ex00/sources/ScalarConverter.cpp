/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 16:41:16 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/23 15:01:09 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <limits>
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

void ScalarConverter::convert(std::string *input) {
	// std::cout << "Input:\t\t" << *input << std::endl;
	if (isChar(input->c_str()))
		convertChar(*input);
	else if (isInt(input->c_str()))
		convertInt(*input);
	// else if (isFloat(input))
	// 	convertFloat(*input);
	// else if (isDouble(input))
	// 	convertDouble(*input);
	// else
	// 	std::cout << "Error: Invalid input" << std::endl;
	// std::cout << "IsChar:\t\t" << (isChar(input->c_str()) ? "✅ | true" : "❌ | false") << std::endl;
	// std::cout << "IsInt:\t\t" << (isInt(input->c_str()) ? "✅ | true" : "❌ | false") << std::endl;
	// std::cout << "IsFloat:\t" << (isFloat(input) ? "✅ | true" : "❌ | false") << std::endl;
	// std::cout << "IsDouble:\t" << (isDouble(input) ? "✅ | true" : "❌ | false") << std::endl;
}
