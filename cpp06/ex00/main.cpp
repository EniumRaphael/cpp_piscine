/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:49:02 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/24 14:58:07 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "color.hpp"

int	main(int argc, char *argv[]) {
	ScalarConverter test;
	if (argc == 1) {
		std::string to_test;
		std::cout << std::endl << CLR_YELLOW << "\t\t[ Testing all convertion for \"Hello World\" ]" << CLR_RESET << std::endl;
		to_test = "Hello World";
		test.convert(&to_test);
		std::cout << std::endl << CLR_YELLOW << "\t\t[ Testing all convertion for 'a' ]" << CLR_RESET << std::endl;
		to_test = "a";
		test.convert(&to_test);
		std::cout << std::endl << CLR_YELLOW << "\t\t[ Testing all convertion for 0 ]" << CLR_RESET << std::endl;
		to_test = "0";
		test.convert(&to_test);
		std::cout << std::endl << CLR_YELLOW << "\t\t[ Testing all convertion for -2147483648 ]" << CLR_RESET << std::endl;
		to_test = "-2147483648";
		test.convert(&to_test);
		std::cout << std::endl << CLR_YELLOW << "\t\t[ Testing all convertion for 2147483647 ]" << CLR_RESET << std::endl;
		to_test = "2147483647";
		test.convert(&to_test);
		std::cout << std::endl << CLR_YELLOW << "\t\t[ Testing all convertion for 4294967300 ]" << CLR_RESET << std::endl;
		to_test = "4294967300";
		test.convert(&to_test);
		std::cout << std::endl << CLR_YELLOW << "\t\t[ Testing all convertion for 42.42 ]" << CLR_RESET << std::endl;
		to_test = "42.42";
		test.convert(&to_test);
		std::cout << std::endl << CLR_YELLOW << "\t\t[ Testing all convertion for -42.42 ]" << CLR_RESET << std::endl;
		to_test = "-42.42";
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
	} else {
		std::cout << std::endl << CLR_YELLOW << "\t\t[ Testing all convertion for " << argv[1] << " ]" << CLR_RESET << std::endl;
		std::string personnal_test = argv[1];
		test.convert(&personnal_test);
	}
	std::cout << std::endl;
}
