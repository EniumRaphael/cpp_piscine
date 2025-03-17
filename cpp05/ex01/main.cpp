/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 14:47:26 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/17 20:43:54 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <ostream>

int	main(void) {

	std::cout << YELLOW << "\t\t[ Testing with the grade 0 ]" << RESET << std::endl;
	try {
		Bureaucrat b1("Roger", 0);
	} catch (std::exception & err) {
		std::cerr << RED << err.what() << RESET << std::endl;
	}

	std::cout << std::endl << YELLOW << "\t\t[ Testing with the grade 151 ]" << RESET << std::endl;
	try {
		Bureaucrat b1("Robert", 151);
	} catch (std::exception & err) {
		std::cerr << RED << err.what() << RESET << std::endl;
	}

	Bureaucrat b1("Bob", 150);
	std::cout << std::endl << YELLOW << "\t\t[ Testing with the demote a Bureaucrate level 150 ]" << RESET << std::endl;
	try {
		b1.demote();
	} catch (std::exception & err) {
		std::cerr << RED << err.what() << RESET << std::endl;
	}
	std::cout << std::endl << std::endl << b1 << std::endl << std::endl;
	std::cout << std::endl << YELLOW << "\t\t[ Testing with the promote a Bureaucrate level 150 ]" << RESET << std::endl;
	try {
		b1.promote();
	} catch (std::exception & err) {
		std::cerr << RED << err.what() << RESET << std::endl;
	}
	std::cout << std::endl << std::endl << b1 << std::endl << std::endl;

	Bureaucrat b2("Norminet", 1);
	std::cout << std::endl << YELLOW << "\t\t[ Testing with the promote a Bureaucrate level 1 ]" << RESET << std::endl;
	try {
		b2.promote();
	} catch (std::exception & err) {
		std::cerr << RED << err.what() << RESET << std::endl;
	}
	std::cout << std::endl << std::endl << b2 << std::endl << std::endl;
	std::cout << std::endl << YELLOW << "\t\t[ Testing with the demote a Bureaucrate level 1 ]" << RESET << std::endl;
	try {
		b2.demote();
	} catch (std::exception & err) {
		std::cerr << RED << err.what() << RESET << std::endl;
	}
	std::cout << std::endl << std::endl << b2 << std::endl << std::endl;

	try {
		b2.promote();
	} catch (std::exception & err) {
		std::cerr << RED << err.what() << RESET << std::endl;
	}

	std::cout << std::endl << YELLOW << "\t\t[ Testing the overload of the '<<' operator ]" << RESET << std::endl;
	Form f1("Norme to cpp", 1, 1);
	std::cout << f1 << std::endl;

	std::cout << std::endl << YELLOW << "\t\t[ Testing beSigned() methode with a new form]" << RESET << std::endl;
	f1.beSigned(b1);
	std::cout << f1 << std::endl;

	std::cout << std::endl << YELLOW << "\t\t[ Testing beSigned() methode with a signed form ]" << RESET << std::endl;
	f1.beSigned(b1);
	std::cout << f1 << std::endl;
}
