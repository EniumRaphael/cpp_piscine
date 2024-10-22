/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:56:49 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/22 14:06:11 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cstring>
#include "color.hpp"

#define MENU CLR_BLUE << "ADD" << CLR_RESET << ":\tAdding a new contact" << std::endl << CLR_BLUE << "SEARCH" << CLR_RESET << ":\tSearching a contact in the list" << std::endl << CLR_BLUE << "EXIT" << CLR_RESET << ":\texit the program" << std::endl

std::string get_input(const char *err_msg, std::string file, int line);

class Contact
{
	public:
		Contact();
		~Contact();
		void init_new(int id);
		void print_all();
		void print();
		bool getUsed();
		void setUsed();
		void clear();
	private:
		std::string _get_number(const char *err_msg, std::string file, int line);
		bool _used;
		int _id;
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _number;
		std::string _secret;
};

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void add(int id);
		Contact array_contact[8];
		void search();
	private:
		void searching_header();
};

#endif
