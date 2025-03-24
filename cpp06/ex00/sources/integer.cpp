/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 22:11:44 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/24 15:14:33 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool isInt(std::string const &str) {
	char *end;
	std::strtol(str.c_str(), &end, 10);
	if (*end)
		return false;
	return true;
}

void convertInt(std::string const &str) {
	long long integer = std::atoll(str.c_str());
	if (integer < INT_MIN || integer > INT_MAX)
	{
		std::cout << CLR_RED << "Error: Integer out of range" << CLR_RESET << std::endl;
		return;
	}
	std::cout << CLR_BLUE << "Char:\t" << CLR_RESET;
	if (integer > -128 && integer < 127 && std::isprint(integer))
		std::cout << CLR_GOLD << "'" << static_cast<char>(integer) << "'" << CLR_RESET << std::endl;
	else
		std::cout << CLR_RED << "Non-Printable" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Int:\t" << CLR_GOLD << static_cast<int>(integer) << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Float:\t" << CLR_GOLD << std::fixed << std::setprecision(1) << static_cast<float>(integer) << "f" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Double:\t" << CLR_GOLD << std::fixed << std::setprecision(1) << static_cast<double>(integer) << CLR_RESET << std::endl;
}
