/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:42:14 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/20 20:03:13 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./phonebook.h"
#include <string>
#include <cstring>

bool adding(int index);

int	main(void)
{
	contact array_contact[8];
	int i;
	std::string input;

	std::getline(std::cout, input, ':');
	if (strcmp(input.data, "ADD:"))
		adding(i);
	if (strcmp(input[i].data, "SEARCH:"))
		array_contact.print();
	if (strcmp(input.data, "EXIT:"))
		return (0);
}
