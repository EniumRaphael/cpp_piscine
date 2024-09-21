/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:08:46 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/03 18:22:21 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <cstdio>
#include <iostream>

std::string str_toupper(std::string str)
{
	for (size_t i = 0; str[i] != '\0'; i++)
		str[i] = std::toupper(str[i]);
	return (str);
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++){
			std::cout << str_toupper(argv[i]);
			if (i + 1 != argc)
				std::cout << " ";
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
