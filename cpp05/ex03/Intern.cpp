/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 19:43:56 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/19 20:29:04 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iterator>

Intern::Intern() {
	std::cout << "[Intern] default constructor" << std::endl;
	_ptr = NULL;
}

Intern::Intern(Intern const & copy) {
	std::cout << "[Intern] copy constructor" << std::endl;
	*this = copy;
}

Intern& Intern::operator= (Intern const & assign) {
	std::cout << "[Intern] assignation operator" << std::endl;
	if (this != &assign) {
		(void)assign;
	}
	return *this;
}

Intern::~Intern() {
	delete this->_ptr;
	std::cout << "[Intern] destructor" << std::endl;
}

Form* Intern::makeForm(std::string type, std::string target) {
	std::string formTypes[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++) {
		if (type == formTypes[i]) {
			std::cout << "Intern creates " << type << std::endl;
			switch (i) {
				case 0:
					_ptr = new ShrubberyCreationForm(target);
				case 1:
					_ptr = new RobotomyRequestForm(target);
				case 2:
					_ptr = new PresidentialPardonForm(target);
				default:
					break;
			}
		}
	}
	std::cout << "Intern could not create " << type << std::endl;
	return _ptr;
}
