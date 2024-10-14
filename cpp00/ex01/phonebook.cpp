/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:50:03 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/14 18:52:45 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	contact::print(void) {
	std::cout << "First Name:" << first_name << std::endl;
	std::cout << "Last Name:" << last_name << std::endl;
	std::cout << "Nickname:" << nickname << std::endl;
	std::cout << "Number:" << number << std::endl;
	std::cout << "Dark Secret:" << dark_secret << std::endl;
	std::cout << "ID:" << id << std::endl;
}

