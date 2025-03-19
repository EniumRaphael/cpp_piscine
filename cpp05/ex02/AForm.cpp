/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:19:41 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/18 15:09:05 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

/**
 * @brief Constructor by default of AForm
 */
AForm::AForm(void) : _name("Default"), _signed(false), _to_execute(150), _to_sign(150) {
	std::cout << "[AForm] Default constructor called" << std::endl;
}
AForm::AForm(std::string const name, int execute, int sign) : _name(name), _signed(false) {
	if (execute < 1) {
		throw GradeTooHighException();
	} else if (execute > 150) {
		throw GradeTooLowException();
	} else {
		this->_to_execute = execute;
	}
	if (sign < 1) {
		throw GradeTooHighException();
	} else if (sign > 150) {
		throw GradeTooLowException();
	} else {
		this->_to_sign = sign;
	}
	std::cout << "[AForm] Smart constructor called" << std::endl;
}

AForm::AForm(AForm const &copy) {
	std::cout << "[AForm] Copy constructor called" << std::endl;
	this->_name = copy._name;
	this->_to_sign = copy._to_sign;
	this->_to_execute = copy._to_execute;
	_signed = copy._signed;
}

AForm& AForm::operator=(AForm const &assign) {
	std::cout << "[AForm] Assign constructor called" << std::endl;
	this->_name = assign._name;
	this->_to_sign = assign._to_sign;
	this->_to_execute = assign._to_execute;
	this->_signed = assign._signed;
	return *this;
}
 
AForm::~AForm() {
	std::cout << "[AForm] Destructor called" << std::endl;
}

std::string AForm::getName() const {
	return this->_name;
}

int AForm::getExecute() const {
	return this->_to_execute;
}

int AForm::getSign() const {
	return this->_to_sign;
}

bool AForm::isSigned() const {
	return this->_signed;
}

void AForm::setSign(int new_sign) {
	this->_to_sign = new_sign;
}

void AForm::setExecute(int new_exec) {
	this->_to_execute = new_exec;
}

std::ostream& operator<<(std::ostream& output, AForm const &toPrint) {
	output << toPrint.getName() << ", Form\n\tTo execute: " << toPrint.getExecute() << "\n\tTo sign: " << toPrint.getSign() << "\n\tAlready signed: " << (toPrint.isSigned() ? "✅ | Yes" : "❌ | No");
	return (output);
}

void AForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->_to_execute) {
		throw AFormForSupperior();
	} else if (_signed == false) {
		throw AFormAlreadySigned();
	}
	else {
		std::cout << "Bureaucrat " << executor.getName() << " executes the Form " << this->_name << std::endl;
	}
}

void AForm::beSigned(Bureaucrat const &bureaucrat) const {
	if (bureaucrat.getGrade() > this->_to_sign) {
		throw AFormForSupperior();
	} else if (_signed == true) {
		throw AFormAlreadySigned();
	}
	else {
		std::cout << "Bureaucrat " << bureaucrat.getName() << " signs the Form " << this->_name << std::endl;
		this->_signed = true;
	}
}
