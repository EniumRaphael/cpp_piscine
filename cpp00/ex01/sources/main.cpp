/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:55:18 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/20 21:38:07 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/**
 * @brief return the input with std::getline()
 *
 * @param err_msg The message return in case of error
 * @return the value of input
 */
std::string get_input(const char *err_msg, std::string file, int line)
{
	std::string input;

	try
	{
		if (!std::getline(std::cin, input))
			throw std::runtime_error("getline can't read the input !\n");
		else if (input.empty())
			throw std::runtime_error("The input can't be empty !\n");
	}
	catch (const std::exception& err)
	{
		std::cerr << CLR_BOLD_RED << "\nError:\t" << err.what() << CLR_RESET << CLR_RED << "(" << err_msg << " [" << file << ":" << line << "]" << ")" << CLR_RESET << std::endl;
		exit(1);
	}
	return (input);
}

int main()
{
	std::string input;
	PhoneBook phonebook;
	size_t i = 0;

	while (true)
	{
		std::cout << MENU << std::endl;
		input = get_input("Main menu", __FILE_NAME__, __LINE__);
		if (strcmp(input.c_str(), "ADD") == 0)
		{
			if (phonebook.array_contact[i].init_new(i) == true)
				i++;
		}
		if (strcmp(input.c_str(), "SEARCH") == 0)
			phonebook.search(i);
		if (strcmp(input.c_str(), "EXIT") == 0)
		{
			std::cout << CLR_LIGHT_RED << "Leaving the program..." << CLR_RESET << std::endl;
			exit(1);
		}
	}
}
