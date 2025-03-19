/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:51:14 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/19 16:10:19 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", ROBOT_SIGN_GRADE, ROBOT_EXEC_GRADE) {
	std::cout << "RobotomyRequestForm default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", ROBOT_SIGN_GRADE, ROBOT_EXEC_GRADE) {
	_target = target;
	std::cout << "RobotomyRequestForm smart constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form("RobotomyRequestForm", ROBOT_SIGN_GRADE, ROBOT_EXEC_GRADE) {
	_target = copy.getTarget();
	*this = copy;
	std::cout << "RobotomyRequestForm copy constructor" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( RobotomyRequestForm const & assign )
{
	std::cout << "Copy assignement operator called" << std::endl;
	setSign(assign.getSign());
	setExecute(assign.getExecute());
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const {
	return _target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	static bool isEven = true;
	if (executor.getGrade() > this->getExecute()) {
		throw Form::GradeTooLowException();
	} else {
		if (isEven) {
			std::cout << this->getTarget() << " success his robotomization" << std::endl;
		} else {
			std::cout << this->getTarget() << " failed his robotomization" << std::endl;
		}
		isEven = !isEven;
	}
}
