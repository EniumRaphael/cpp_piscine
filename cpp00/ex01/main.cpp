/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:42:14 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/15 00:14:12 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>

/**
 * @brief Adding a new contact
 *
 * @param index index for the new contact
 * @param array_contact the array asked by the subject
 * @return true on error
 */
bool adding(int index, contact array_contact[8])
{
	std::string input;

	if (index > 8 || index < 0)
		return (true);

	std::cout << "Thanks to give the number of the new contact" << std::endl;
	std::getline(std::cin, input);
	if (input.length() != 10)
		return (true);
	array_contact[index].number = input;

	std::cout << "Thanks to give the nickname of the new contact" << std::endl;
	std::getline(std::cin, input);
	array_contact[index].nickname = input;

	std::cout << "Thanks to give the first_name of the new contact" << std::endl;
	std::getline(std::cin, input);
	array_contact[index].first_name = input;
	
	std::cout << "Thanks to give the last_name of the new contact" << std::endl;
	std::getline(std::cin, input);
	array_contact[index].last_name = input;

	std::cout << "Thanks to give the dark secret of the new contact" << std::endl;
	std::getline(std::cin, input);
	array_contact[index].dark_secret = input;
	
	array_contact[index].id = index;
	time_t now = time(0);
	array_contact[index].creation_time = localtime(&now);

	if (DEBUG)
		array_contact[index]._debug();
	return (false);
}

bool	searching(contact contact[8], int index)
{
	if (index == 0)
		return (true);
	for (int i = 0; i < index; i++)
		contact[i]._debug();
	return (false);
}

int	main(void)
{
	contact array_contact[8];
	int i;
	std::string input;

	i = 0;
	while (true)
	{
		std::cout << MENU_TEXT << std::endl;
		std::getline(std::cin, input);
		if (strcmp(input.c_str(), "ADD") == 0)
		{
			if (adding(i, array_contact))
				std::cerr << RED << "\nError: during the adding process\n" << RESET << std::endl;
			else
				i++;
		}
		if (strcmp(input.c_str(), "SEARCH") == 0)
			if (searching(array_contact, i))
				std::cerr << RED << "\nError: during the searching process\n" << RESET << std::endl;
		if (strcmp(input.c_str(), "EXIT") == 0)
			return (0);
		input.clear();
	}
}
