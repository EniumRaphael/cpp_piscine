/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:09:21 by rparodi           #+#    #+#             */
/*   Updated: 2024/12/17 23:00:21 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	for (int i = 0; i < 8; i++)
		array_contact[i] = Contact();
}

PhoneBook::~PhoneBook()
{
	return;
}

void	PhoneBook::searching_header()
{
	std::cout << CLR_GREY << "|" << CLR_GOLD << std::setw(10)<< "ID" << CLR_RESET;
	std::cout << CLR_GREY << "|" << CLR_GOLD << std::setw(10)<< "First Name" << CLR_RESET;
	std::cout << CLR_GREY << "|" << CLR_GOLD << std::setw(10)<< "Last Name" << CLR_RESET;
	std::cout << CLR_GREY << "|" << CLR_GOLD << std::setw(10)<< "Nickname" << CLR_RESET;
	std::cout << CLR_GREY << "|" << CLR_RESET << std::endl;           
}

void	PhoneBook::search()
{
	unsigned long long chosen;
	if (!array_contact[0].getUsed())
	{
		std::cout << CLR_RED << "\nError:\t Don't have any contact to search in (" << __FILE_NAME__ << ":" << __LINE__ << ")\n" << std::endl;
		return;
	}
	searching_header();
	for (int i = 0; i < 8; i++)
		array_contact[i].print();
	std::cout << "\nGive me the contact on which you want more information:" << std::endl;
	chosen = atoll(get_input("Search selection", __FILE_NAME__, __LINE__).c_str());
	if (chosen >= 0 && chosen < 8 && array_contact[chosen].getUsed())
		array_contact[chosen].print_all();
	else
	{
		std::cout << CLR_RED << "\nError:\t The contact chosen doesn't exist (" << __FILE_NAME__ << ":" << __LINE__ << ")\n" << std::endl;
		return ;
	}
	std::cout << std::endl;
}
