/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 22:06:48 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/24 14:38:51 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "color.hpp"

bool isChar(std::string const &str) {
	if (str.length() == 1 && !std::isdigit(str[0])) {
		return true;
	}
	return false;
}

void convertChar(std::string const &str) {
	char toChar = str[0];
	std::cout << CLR_BLUE << "Char:\t'" << CLR_GOLD << toChar << CLR_BLUE << "'" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Int:\t" << CLR_GOLD << static_cast<int>(toChar) << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Float:\t" << CLR_GOLD << std::fixed << std::setprecision(1) << static_cast<float>(toChar) << "f" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Double:\t" << CLR_GOLD << std::fixed << std::setprecision(1) << static_cast<double>(toChar) << CLR_RESET << std::endl;
}
