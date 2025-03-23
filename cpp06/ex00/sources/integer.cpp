/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 22:11:44 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/23 18:44:01 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>
#include <climits>

bool isInt(std::string const &str) {
	long long tmp = std::atoll(str.c_str());
	if (tmp > INT_MAX || tmp < INT_MIN)
		return false;
	if (str.empty() && (str.at(0) == '-' || str.at(0) == '+'))
		return false;
	for (size_t i = 0; i < str.length(); i++) {
		if (str[0] == '-' || str[0] == '+')
			i++;
		else if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

void convertInt(std::string const &str) {
	int integer = std::atoi(str.c_str());
	std::cout << "char: ";
		if (std::isprint(integer))
			std::cout << "'" << static_cast<char>(integer) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	std::cout << "int: " << integer << std::endl;
	std::cout << "float: " << static_cast<float>(integer) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(integer) << ".0" << std::endl;
}
