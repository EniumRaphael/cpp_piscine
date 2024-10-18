/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:09:21 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/17 16:44:08 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Contact::init_new(int id)
{
	_id = id;
	_first_name = get_input("first_name [phonebook.cpp:18]");
	_last_name = get_input("last_name [phonebook.cpp:19]");
	_nickname = get_input("nickname [phonebook.cpp:20]");
	_number = get_input("number [phonebook.cpp:21]");
	_secret = get_input("secret [phonebook.cpp:22]");
}

void Contact::print()
{
	std::cout << "|" <<  std::setw(10) << _id << "|";
	std::cout << "|" <<  std::setw(10) << _first_name << "|";
	std::cout << "|" <<  std::setw(10) << _last_name << "|";
	std::cout << "|" <<  std::setw(10) << _nickname << "|";
	std::cout << "|" <<  std::setw(10) << _number << "|";
	std::cout << "|" <<  std::setw(10) << _secret << "|";
}
