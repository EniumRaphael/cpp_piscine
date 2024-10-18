/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:56:49 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/18 12:18:04 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <stddef.h>
#include <cstdlib>
#include <cstring>
#include "color.hpp"

#define ERROR 1
#define NO_ERROR 0

std::string get_input(const char *str);

class Contact
{
	public:
		/*Contact();*/
		/*~Contact();*/
		void init_new(int id);
		void print();
	private:
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
		void add();
		void search();
	private:
		Contact _array_contact[8];
};


#endif
