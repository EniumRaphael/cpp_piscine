/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 22:01:37 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/28 23:08:46 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	std::cout << CLR_YELLOW << "\t[ Testing with an empty tab ]" << CLR_RESET << std::endl;
	Array<int> empty;
	std::cout << empty << std::endl;
	std::cout << CLR_YELLOW << "\t[ Testing with a tab with strings ]" << CLR_RESET << std::endl;
	Array<std::string> strings(3);
	strings[0] = "Hello";
	strings[1] = "World";
	strings[2] = "!";
	std::cout << strings << std::endl << std::endl;
	std::cout << CLR_YELLOW << "\t[ Testing deep copy Array<float> ]" << CLR_RESET << std::endl;
	Array<float> original_floats(4);
	for (unsigned int i = 0; i < original_floats.size(); i++)
		original_floats[i] = i + (i * 0.5f);
	Array<float> copied_floats(original_floats);
	copied_floats[1] = 42.42f;
	std::cout << std::endl << CLR_GREEN << "[ Original ]" << CLR_RESET << std::endl << std::endl << original_floats;
	std::cout << std::endl << CLR_GREEN << "[ Copied (modified) ]" << CLR_RESET << std::endl << std::endl << copied_floats << std::endl;
	std::cout << CLR_YELLOW << "\t[ Testing with a tab with integer ]" << CLR_RESET << std::endl;
	Array<int> digits(42);
	std::srand(time(NULL));
	for (unsigned int i = 0; i < digits.size(); i++) {
		try {
			digits[i] = std::rand();
		} catch (std::exception &e) {
			std::cerr << CLR_RED << e.what() << CLR_RESET << std::endl;
		}
	}
	std::cout << std::endl << digits << CLR_RESET << std::endl;
	std::cout << CLR_YELLOW << "\t[ Testing out of bands (too far above)]" << CLR_RESET << std::endl;
	try {
		digits[99];
	} catch (std::exception &e) {
		std::cerr << CLR_RED << e.what() << CLR_RESET << std::endl;
	}
	std::cout << CLR_YELLOW << "\t[ Testing out of bands (too far below)]" << CLR_RESET << std::endl;
	try {
		digits[-42];
	} catch (std::exception &e) {
		std::cerr << CLR_RED << e.what() << CLR_RESET << std::endl;
	}
}
