/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:58:29 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/05 11:31:36 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ostream>
#include <string>
#include <iostream>

#define CLR_RESET       "\033[0m"
#define CLR_YELLOW "\033[0;33m"
#define CLR_BLUE "\033[0;34m"
#define CLR_CYAN "\033[0;36m"
#define CLR_GOLD "\033[38;5;220m"

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strptr = &str;
	std::string &strref = str;

	std::cout << CLR_BLUE << "Memory Address:" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Address of str:\t\t" << CLR_CYAN << &str << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Address of strptr:\t" << CLR_CYAN << strptr<< CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Address of strref:\t" << CLR_CYAN << &strref<< CLR_RESET << std::endl;

	std::cout << std::endl << CLR_YELLOW << "Value:" << CLR_RESET << std::endl;
	std::cout << CLR_YELLOW << "Value of str:\t\t" << CLR_GOLD << str << std::endl;
	std::cout << CLR_YELLOW << "Value of strptr:\t" << CLR_GOLD << *strptr << std::endl;
	std::cout << CLR_YELLOW << "Value of strref:\t" << CLR_GOLD << strref << std::endl;

	return 0;
}
