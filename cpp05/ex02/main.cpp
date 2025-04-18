/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 14:47:26 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/19 17:13:07 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

#define SCF_LAUNCH 5

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

	std::cout << b2 << std::endl;
	try {
		b2.promote();
	} catch (std::exception & err) {
		std::cerr << RED << err.what() << RESET << std::endl;
	}
	std::cout << b2 << std::endl;
	std::cout << std::endl << YELLOW << "\t\t[ Testing PresidentialPardonForm (With permissions) ]" << RESET << std::endl;
	PresidentialPardonForm ppf("Roger");
	b2.executeForm(ppf);

	std::cout << std::endl << YELLOW << "\t\t[ Testing PresidentialPardonForm (Without permissions) ]" << RESET << std::endl;
	b1.executeForm(ppf);

	std::cout << std::endl << YELLOW << "\t\t[ Testing ShrubberyCreationForm (With permissions) ]" << RESET << std::endl;
	ShrubberyCreationForm scf("Roger");
		b2.executeForm(scf);

	std::cout << std::endl << YELLOW << "\t\t[ Testing ShrubberyCreationForm (Without permissions) ]" << RESET << std::endl;
	b1.executeForm(scf);

	std::cout << std::endl << YELLOW << "\t\t[ Testing RobotomyRequestForm (With permissions) ]" << RESET << std::endl;
	RobotomyRequestForm rrf("Roger");
	for (int i = 0; i < SCF_LAUNCH; i++) {
		b2.executeForm(rrf);
	}

	std::cout << std::endl << YELLOW << "\t\t[ Testing RobotomyRequestForm (Without permissions) ]" << RESET << std::endl;
	b1.executeForm(rrf);
}
