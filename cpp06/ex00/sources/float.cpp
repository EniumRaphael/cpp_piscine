/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 22:11:44 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/24 15:11:39 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "color.hpp"
#include <cstdlib>
#include <climits>
#include <string>
#include <iostream>
#include <cerrno>

bool isFloat(std::string const &str) {
	if (str.empty())
		return false;
	char *end;
	int err = 0;
	std::strtof(str.c_str(), &end);
	if (*end)
		return false;
	if (err == ERANGE)
		return false;
	return true;
}

void convertFloat(std::string const &str) {
	char *end;
	float floating = std::strtof(str.c_str(), &end);
	std::cout << CLR_BLUE << "Char:\t" << CLR_RESET;
	if (floating > -128 && floating < 127 && std::isprint(floating))
		std::cout << CLR_BLUE << "'" << CLR_GOLD << static_cast<char>(floating) << CLR_BLUE << "'" << CLR_RESET << std::endl;
	else
		std::cout << CLR_RED << "Non displayable" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Int:\t" << CLR_GOLD << static_cast<int>(floating)<< CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Float:\t" << CLR_GOLD << std::fixed << std::setprecision(1) << floating << "f" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Double:\t" << CLR_GOLD << std::fixed << std::setprecision(1) << static_cast<double>(floating) << CLR_RESET << std::endl;
}
