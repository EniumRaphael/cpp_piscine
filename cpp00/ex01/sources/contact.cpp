/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:42:58 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/10 15:23:31 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{
	_used = false;
	_id = 0;
	_first_name = "";
	_last_name = "";
	_nickname = "";
	_number = "";
	_secret = "";
}

Contact::~Contact()
{
	return;
}

bool Contact::getUsed()
{
	return _used;
}

void Contact::clear()
{
	_used = false;
	_id = 0;
	_first_name = "";
	_last_name = "";
	_nickname = "";
	_number = "";
	_secret = "";
}

std::string Contact::_get_number(const char *err_msg, std::string file, int line)
{
	std::string to_ret = get_input(err_msg, file, line);
	if (to_ret.length() != 10 || to_ret.find_first_not_of("0123456789") == 0)
	{
		std::cerr << CLR_RED << "Error:\t Thanks to give only 10 digits" << CLR_RESET << std::endl;
		return "";
	}
	else
		return to_ret;
}

void Contact::init_new(int id)
{
	_id = id;
	_used = true;
	while (_first_name.empty() == true)
	{
		std::cout << "First Name:\t";
		_first_name = get_input("first_name", __FILE_NAME__, __LINE__);
	}
	while (_last_name.empty() == true)
	{
		std::cout << "Last Name:\t";
		_last_name = get_input("last_name", __FILE_NAME__, __LINE__);
	}
	while (_nickname.empty() == true)
	{
		std::cout << "Nickname:\t";
		_nickname = get_input("nickname", __FILE_NAME__, __LINE__);
	}
	while (_number.empty() == true)
	{
		std::cout << "Number:\t\t";
		_number = _get_number("number", __FILE_NAME__, __LINE__);
	}
	while (_secret.empty() == true)
	{
		std::cout << "Secret:\t\t";
		_secret = get_input("secret", __FILE_NAME__, __LINE__);
	}
}

void Contact::print()
{
	if (!_used) return;

	std::cout << CLR_GREY << "|" << CLR_RESET << std::setw(10) << _id;
	if (_first_name.length() > 10)
		std::cout << CLR_GREY << "|" << CLR_RESET <<  std::setw(9) << _first_name.substr(0, 9) << ".";
	else
		std::cout << CLR_GREY << "|" << CLR_RESET <<  std::setw(10) << _first_name;
	if (_last_name.length() > 10)
		std::cout << CLR_GREY << "|" << CLR_RESET <<  std::setw(9) << _last_name.substr(0, 9) << ".";
	else
		std::cout << CLR_GREY << "|" << CLR_RESET <<  std::setw(10) << _last_name;
	if (_nickname.length() > 10)
		std::cout << CLR_GREY << "|" << CLR_RESET <<  std::setw(9) << _nickname.substr(0, 9) << ".";
	else
		std::cout << CLR_GREY << "|" << CLR_RESET <<  std::setw(10) << _nickname;
	std::cout << CLR_GREY << "|" << CLR_RESET << std::endl;
}

void Contact::print_all()
{
	std::cout << CLR_GREY << "First Name:\t" << CLR_RESET << _first_name << std::endl;
	std::cout << CLR_GREY << "Last Name:\t" << CLR_RESET << _last_name << std::endl;
	std::cout << CLR_GREY << "Nickname:\t" << CLR_RESET << _nickname << std::endl;
	std::cout << CLR_GREY << "Number:\t\t" << CLR_RESET << _number << std::endl;
	std::cout << CLR_GREY << "Secret:\t\t" << CLR_RESET << _secret << std::endl;
}
