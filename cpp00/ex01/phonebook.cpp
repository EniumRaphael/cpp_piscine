/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:50:03 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/15 00:32:03 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void contact::_debug() {
	std::cout << GOLD << "\n\n\tDEBUG MODE ENABLE\n" << RESET << std::endl;
	std::cout << GREY;
	std::cout << "First Name:\t" << first_name << std::endl;
	std::cout << "Last Name:\t" << last_name << std::endl;
	std::cout << "Nickname:\t" << nickname << std::endl;
	std::cout << "Number:\t\t" << number << std::endl;
	std::cout << "Dark Secret:\t" << dark_secret << std::endl;
	std::cout << "ID:\t\t" << id << std::endl;
	std::cout << "Creation Hour:\t" << creation_time->tm_hour << ":" << creation_time->tm_min << ":" << creation_time->tm_sec << std::endl;
	std::cout << RESET << std::endl;
}

