/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:49:02 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/23 18:57:30 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "color.hpp"

int	main(void) {
	ScalarConverter test;
	std::string to_test;
	std::cout << std::endl << CLR_YELLOW << "\t\t[ Testing all convertion for 'a' ]" << CLR_RESET << std::endl;
	to_test = "a";
	test.convert(&to_test);
	std::cout << std::endl << CLR_YELLOW << "\t\t[ Testing all convertion for 0 ]" << CLR_RESET << std::endl;
	to_test = "0";
	test.convert(&to_test);
	std::cout << std::endl << CLR_YELLOW << "\t\t[ Testing all convertion for 4294967300 ]" << CLR_RESET << std::endl;
	to_test = "4294967300";
	test.convert(&to_test);
	std::cout << std::endl << CLR_YELLOW << "\t\t[ Testing all convertion for 42.42 ]" << CLR_RESET << std::endl;
	to_test = "42.42";
	test.convert(&to_test);
	std::cout << std::endl << CLR_YELLOW << "\t\t[ Testing all convertion for -inff ]" << CLR_RESET << std::endl;
	to_test = "-inff";
	test.convert(&to_test);
	std::cout << std::endl << CLR_YELLOW << "\t\t[ Testing all convertion for +inff ]" << CLR_RESET << std::endl;
	to_test = "+inff";
	test.convert(&to_test);
	std::cout << std::endl << CLR_YELLOW << "\t\t[ Testing all convertion for nanf ]" << CLR_RESET << std::endl;
	to_test = "nanf";
	test.convert(&to_test);
	std::cout << std::endl << CLR_YELLOW << "\t\t[ Testing all convertion for -inf ]" << CLR_RESET << std::endl;
	to_test = "-inf";
	test.convert(&to_test);
	std::cout << std::endl << CLR_YELLOW << "\t\t[ Testing all convertion for +inf ]" << CLR_RESET << std::endl;
	to_test = "+inf";
	test.convert(&to_test);
	std::cout << std::endl << CLR_YELLOW << "\t\t[ Testing all convertion for nan ]" << CLR_RESET << std::endl;
	to_test = "nan";
	test.convert(&to_test);
}
