/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:55:18 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/18 12:19:07 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/**
 * @brief return the input with std::getline()
 *
 * @param err_msg The message return in case of error
 * @return the value of input
 */
std::string get_input(const char *err_msg)
{
	std::string input;

	try
	{
		if (!std::getline(std::cin, input))
			throw std::runtime_error("getline can't read the input !\n");
	}
	catch (const std::exception& err)
	{
		std::cerr << CLR_BOLD_RED << "\nError:\t" << err.what() << CLR_RESET << CLR_RED << "(" << err_msg << ")" << CLR_RESET << std::endl;
		exit(1);
	}
	return (input);
}

int main()
{
	std::string input;
	Contact array_contact[8];
	size_t i = 0;

	while (true)
	{
		input = get_input("SELECT MENU [main.cpp:38]");
		if (strcmp(input.c_str(), "ADD"))
		{
			std::cout << "adding" << std::endl;
			array_contact[i].init_new(i);
			i++;
		}
		if (strcmp(input.c_str(), "EXIT"))
			exit(1);
	}
}
