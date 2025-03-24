/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 22:11:44 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/24 15:11:15 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool isDouble(std::string const &str) {
	if (str.empty())
		return false;
	char *end;
	int err = 0;
	std::strtod(str.c_str(), &end);
	if (*end)
		return false;
	if (err == ERANGE)
		return false;
	return true;
}

void convertDouble(std::string const &str) {
	char *end;
	float the_double = std::strtod(str.c_str(), &end);
	std::cout << CLR_BLUE << "Char:\t" << CLR_RESET;
	if (the_double > -128 && the_double < 127 && std::isprint(the_double))
		std::cout << CLR_BLUE << "'" << CLR_GOLD << static_cast<char>(the_double) << CLR_BLUE << "'" << CLR_RESET << std::endl;
	else
		std::cout << CLR_RED << "Non displayable" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Int:\t" << CLR_GOLD << static_cast<int>(the_double)<< CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Float:\t" << CLR_GOLD << std::fixed << std::setprecision(1) << static_cast<float>(the_double) << "f" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Double:\t" << CLR_GOLD << std::fixed << std::setprecision(1) << the_double << CLR_RESET << std::endl;
}
