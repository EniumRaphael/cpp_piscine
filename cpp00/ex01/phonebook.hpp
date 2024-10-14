/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 18:59:14 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/14 19:05:17 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>

#define MENU_TEXT "You're in the main menu:\nHere's the command:\n\t- ADD: To add a new contact\n\t- SEARCH: To search a contact\n\t- EXIT: to exit the program"

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
	
		void print(void);
};

#endif
