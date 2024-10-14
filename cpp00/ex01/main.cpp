/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:42:14 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/14 19:06:54 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <ostream>
#include <string>
#include <cstring>
#include <strings.h>

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

	if (DEBUG)
		array_contact[index].print();
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
		if (strcmp(input.c_str(), "ADD:") == 0)
			if (adding(i, array_contact))
				std::cerr << "Error: during the adding process" << std::endl;
		if (strcmp(input.c_str(), "SEARCH:") == 0)
			/*if (searching(array_contact))*/;
		if (strcmp(input.c_str(), "EXIT:") == 0)
			return (0);
		input.clear();
		i++;
	}
}
