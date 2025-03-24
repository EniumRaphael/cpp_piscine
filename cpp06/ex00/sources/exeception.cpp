/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exeception.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 11:38:01 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/24 14:09:50 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "color.hpp"

void not_a_number() {
	std::cout << CLR_BLUE << "Char:\t" << CLR_RED << "Impossible" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Int:\t" << CLR_RED << "Impossible" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Float:\t" << CLR_GOLD << "nanf" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Double:\t" << CLR_GOLD << "nan" << CLR_RESET << std::endl;
}

void minus_infinity() {
	std::cout << CLR_BLUE << "Char:\t" << CLR_RED << "Impossible" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Int:\t" << CLR_RED << "Impossible" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Float:\t" << CLR_GOLD << "-inff" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Double:\t" << CLR_GOLD << "-inf" << CLR_RESET << std::endl;
}

void plus_infinity() {
	std::cout << CLR_BLUE << "Char:\t" << CLR_RED << "Impossible" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Int:\t" << CLR_RED << "Impossible" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Float:\t" << CLR_GOLD << "+inff" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Double:\t" << CLR_GOLD << "+inf" << CLR_RESET << std::endl;
}
