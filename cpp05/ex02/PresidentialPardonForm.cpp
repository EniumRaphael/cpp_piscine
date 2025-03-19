/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 12:17:47 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/19 15:37:19 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", PRES_SIGN_GRADE, PRES_EXEC_GRADE) {
	std::cout << "PresidentialPardonForm default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", PRES_SIGN_GRADE, PRES_EXEC_GRADE) {
	_target = target;
	std::cout << "PresidentialPardonForm smart constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : AForm("PresidentialPardonForm", PRES_SIGN_GRADE, PRES_EXEC_GRADE) {
	_target = copy.getTarget();
	*this = copy;
	std::cout << "PresidentialPardonForm copy constructor" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( PresidentialPardonForm const & assign )
{
	std::cout << "Copy assignement operator called" << std::endl;
	setSign(assign.getSign());
	setExecute(assign.getExecute());
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const {
	return _target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->getExecute()) {
		throw AForm::GradeTooLowException();
	} else {
		std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}
