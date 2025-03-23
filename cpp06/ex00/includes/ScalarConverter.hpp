/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:50:13 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/22 22:20:50 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

bool isInt(std::string const &str);
void convertInt(std::string const &str);
bool isChar(std::string const &str);
void convertChar(std::string const &str);

class ScalarConverter {
	public:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter const &copy);
		ScalarConverter& operator = (ScalarConverter const &assign);
		static void convert(std::string *input);
	private:
};
