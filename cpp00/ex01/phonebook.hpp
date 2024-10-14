/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 18:59:14 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/15 00:26:50 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <ostream>
#include <string>
#include <cstring>
#include <ctime>

#define MENU_TEXT "You're in the main menu:\nHere's the command:\n\t- " << BLUE << "ADD: " << RESET << "To add a new contact\n\t- " BLUE << "SEARCH: " << RESET "To search a contact\n\t- " BLUE << "EXIT: " << RESET "to exit the program"
#define GOLD "\033[38;5;220m"
#define GREY "\033[0;90m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

#ifndef DEBUG
# define DEBUG 0
#endif

class contact {
	public:
		int id;
		std::string number;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string dark_secret;
		struct tm *creation_time;
		void _debug(void);
};

#endif
