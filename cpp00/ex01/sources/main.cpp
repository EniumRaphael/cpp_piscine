/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:55:18 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/22 14:05:46 by rparodi          ###   ########.fr       */
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
	}
	catch (const std::exception& err)
	{
		std::cerr << CLR_BOLD_RED << "\nError:\t" << err.what() << CLR_RESET << CLR_RED << "(" << err_msg << " [" << file << ":" << line << "]" << ")" << CLR_RESET << std::endl;
		exit(1);
	}
	if (input.empty() == true)
		return "";
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
		if (input == "ADD")
		{
			if (phonebook.array_contact[i].getUsed() == true)
				phonebook.array_contact[i].clear();
			phonebook.array_contact[i].init_new(i);
			i = (i + 1) % 8;
		}
		if (input ==  "SEARCH")
			phonebook.search();
		if (input == "EXIT")
		{
			std::cout << CLR_LIGHT_RED << "Leaving the program..." << CLR_RESET << std::endl;
			exit(1);
		}
	}
}
