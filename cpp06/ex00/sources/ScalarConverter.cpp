/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 16:41:16 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/24 15:07:58 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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
	if (*input == "nan" || *input == "nanf")
		not_a_number();
	else if (*input == "-inf" || *input == "-inff")
		minus_infinity();
	else if (*input == "+inf" || *input == "+inff")
		plus_infinity();
	else if (isChar(input->c_str())) {
		convertChar(*input);
	}
	else if (isInt(input->c_str())) {
		try {
			convertInt(*input);
		} catch (std::exception &e) {
			std::cerr << CLR_RED << e.what() << CLR_RESET << std::endl;
			return;
		}
	}
	else if (isFloat(input->c_str())) {
		convertFloat(*input);
	}
	else if (isDouble(input->c_str())) {
		convertDouble(*input);
	}
	else
	{
		std::cout << CLR_BLUE << "Char:\t" << CLR_RED << " Impossible" << CLR_RESET << std::endl;
		std::cout << CLR_BLUE << "Int:\t" << CLR_RED << " Impossible" << CLR_RESET << std::endl;
		std::cout << CLR_BLUE << "Float:\t" << CLR_RED << " Impossible" << CLR_RESET << std::endl;
		std::cout << CLR_BLUE << "Double:\t" << CLR_RED << " Impossible" << CLR_RESET << std::endl;
	}
}
