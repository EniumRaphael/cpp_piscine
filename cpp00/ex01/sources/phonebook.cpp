/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:09:21 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/18 15:55:41 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Contact::init_new(int id)
{
	_id = id;
	std::cout << "First Name:\t";
	_first_name = get_input("first_name [phonebook.cpp:18]");
	std::cout << "Last Name:\t";
	_last_name = get_input("last_name [phonebook.cpp:19]");
	std::cout << "Nickname:\t";
	_nickname = get_input("nickname [phonebook.cpp:20]");
	std::cout << "Number:\t";
	_number = get_input("number [phonebook.cpp:21]");
	std::cout << "Secret:\t";
	_secret = get_input("secret [phonebook.cpp:22]");
	Contact::print();
}

void Contact::print()
{
	std::cout << "|" <<  std::setw(10) << _id;
	if (_first_name.length() > 10)
		std::cout << "|" <<  std::setw(10) << _first_name.substr(0, 9) << ".";
	else
		std::cout << "|" <<  std::setw(10) << _first_name;
	if (_last_name.length() > 10)
		std::cout << "|" <<  std::setw(10) << _last_name.substr(0, 9) << ".";
	else
		std::cout << "|" <<  std::setw(10) << _last_name;
	if (_nickname.length() > 10)
		std::cout << "|" <<  std::setw(10) << _nickname.substr(0, 9) << ".";
	else
		std::cout << "|" <<  std::setw(10) << _nickname;
	if (_number.length() > 10)
		std::cout << "|" <<  std::setw(10) << _number.substr(0, 9) << ".";
	else
		std::cout << "|" <<  std::setw(10) << _number;
	if (_secret.length() > 10)
		std::cout << "|" <<  std::setw(10) << _secret.substr(0, 9) << ".";
	else
		std::cout << "|" <<  std::setw(10) << _secret;
	std::cout << "|" << std::endl;
}
