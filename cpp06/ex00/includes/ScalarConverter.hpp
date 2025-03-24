/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:50:13 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/24 14:44:46 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "color.hpp"

#include <cctype>
#include <cerrno>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>

bool isChar(std::string const &str);
bool isDouble(std::string const &str);
bool isFloat(std::string const &str);
bool isInt(std::string const &str);
void convertChar(std::string const &str);
void convertDouble(std::string const &str);
void convertFloat(std::string const &str);
void convertInt(std::string const &str);
void minus_infinity();
void not_a_number();
void plus_infinity();

class ScalarConverter {
	public:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter const &copy);
		ScalarConverter& operator = (ScalarConverter const &assign);
		static void convert(std::string *input);
	private:
};
