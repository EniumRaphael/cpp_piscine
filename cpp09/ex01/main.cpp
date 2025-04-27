/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 12:58:08 by rparodi           #+#    #+#             */
/*   Updated: 2025/04/27 15:50:20 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include "RPN.hpp"

/**
 * @brief check if the input have only numbers and operators
 *
 * @param str the input of the user
 * @return true if the input is valid, false otherwise
 */
bool check_input(std::string str) {
	std::string allowed = "0123456789 +-*/";
	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
		if (allowed.find(*it) == std::string::npos)
			return false;
	}
	return true;
}

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << CLR_RED << "Usage:\t" << argv[0] << " <string>" << CLR_RESET << std::endl;
	}
	std::string input = argv[1];
	if (!check_input(input)) {
		std::cerr << CLR_RED << "Error:\tYour input can only have digits, spaces and the operators '+' '-' '*' '/'" << CLR_RESET << std::endl;
	}
}
