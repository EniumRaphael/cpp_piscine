/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 22:06:48 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/22 22:10:24 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool isChar(std::string const &str) {
	if (str.length() == 1 && !std::isdigit(str[0])) {
		return true;
	}
	return false;
}

void convertChar(std::string const &str) {
	char toChar = str[0];
	int toInt = static_cast<int>(toChar);
	float toFloat = static_cast<float>(toChar);
	double toDouble = static_cast<double>(toChar);
	std::cout << "Char: '" << toChar  << "'" << std::endl;
	std::cout << "Int: " << toInt << std::endl;
	std::cout << "Float: " << toFloat << ".0f" << std::endl;
	std::cout << "Double: " << toDouble << ".0" << std::endl;
}
