/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 11:58:38 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/26 14:10:19 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <typeinfo>
#include "color.hpp"

/**
 * @brief Generate a random class (A / B / C)
 *
 * @return the pointer to the class
 */
Base* generate(void) {
	std::srand(std::time(NULL));
	int choice = std::rand();
	Base *ptr;
	switch (choice % 3)
	{
		case 0:
		{
			std::cout << std::endl << CLR_YELLOW << "\t[ Chosen has a value of " << CLR_GOLD << choice << CLR_YELLOW << " and A it's chosen ]" << CLR_RESET << std::endl << std::endl;
			ptr = new A;
			break;
		}
		case 1:
		{
			std::cout << std::endl << CLR_YELLOW << "\t[ Chosen has a value of " << CLR_GOLD << choice << CLR_YELLOW << " and B it's chosen ]" << CLR_RESET << std::endl << std::endl;
			ptr = new B;
			break;
		}
		case 2:
		{
			std::cout << std::endl << CLR_YELLOW << "\t[ Chosen has a value of " << CLR_GOLD << choice << CLR_YELLOW << " and C it's chosen ]" << CLR_RESET << std::endl << std::endl;
			ptr = new C;
			break;
		}
		default:
			return NULL;
	}
	return ptr;
}

/**
 * @brief Indentify the type of the class
 *
 * @param ptr pointer to the class
 */
void	identify(Base *ptr) {
	if (dynamic_cast<A*>(ptr))
		std::cout << CLR_BLUE << "Indentify with pointer function:\t" << CLR_GOLD << "A" << CLR_RESET << std::endl;
	else if (dynamic_cast<B*>(ptr))
		std::cout << CLR_BLUE << "Indentify with pointer function:\t" << CLR_GOLD << "B" << CLR_RESET << std::endl;
	else if (dynamic_cast<C*>(ptr))
		std::cout << CLR_BLUE << "Indentify with pointer function:\t" << CLR_GOLD << "C" << CLR_RESET << std::endl;
}

/**
 * @brief Indentify the type of the class
 *
 * @param ref reference to the class
 */
void	identify(Base &ref) {
	try {
		A &a = dynamic_cast<A&>(ref);
		(void)a;
		std::cout << CLR_BLUE << "Indentify with reference function:\t" << CLR_GOLD << "A" << CLR_RESET << std::endl;
	} catch (std::bad_cast &e) {}
	try {
		B &b = dynamic_cast<B&>(ref);
		(void)b;
		std::cout << CLR_BLUE << "Indentify with reference function:\t" << CLR_GOLD << "B" << CLR_RESET << std::endl;
	} catch (std::bad_cast &e) {}
	try {
		C &c = dynamic_cast<C&>(ref);
		(void)c;
		std::cout << CLR_BLUE << "Indentify with reference function:\t" << CLR_GOLD << "C" << CLR_RESET << std::endl;
	} catch (std::bad_cast &e) {}
}

int	main(void)
{
	Base *test = generate();
	if (test == NULL) {
		std::cerr << CLR_RED << "Error: generate() return nullptr" << CLR_RESET << std::endl;
		return 1;
	}
	else {
		identify(test);
		identify(*test);
		std::cout << std::endl;
		delete test;
		return 0;
	}
}
