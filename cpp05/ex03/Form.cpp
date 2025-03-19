/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:19:41 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/18 15:09:05 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/**
 * @brief Constructor by default of Form
 */
Form::Form(void) : _name("Default"), _signed(false), _to_execute(150), _to_sign(150) {
	std::cout << "[Form] Default constructor called" << std::endl;
}
Form::Form(std::string const name, int execute, int sign) : _name(name), _signed(false) {
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
	std::cout << "[Form] Smart constructor called" << std::endl;
}

Form::Form(Form const &copy) {
	std::cout << "[Form] Copy constructor called" << std::endl;
	this->_name = copy._name;
	this->_to_sign = copy._to_sign;
	this->_to_execute = copy._to_execute;
	_signed = copy._signed;
}

Form& Form::operator=(Form const &assign) {
	std::cout << "[Form] Assign constructor called" << std::endl;
	this->_name = assign._name;
	this->_to_sign = assign._to_sign;
	this->_to_execute = assign._to_execute;
	this->_signed = assign._signed;
	return *this;
}
 
Form::~Form() {
	std::cout << "[Form] Destructor called" << std::endl;
}

std::string Form::getName() const {
	return this->_name;
}

int Form::getExecute() const {
	return this->_to_execute;
}

int Form::getSign() const {
	return this->_to_sign;
}

bool Form::isSigned() const {
	return this->_signed;
}

void Form::setSign(int new_sign) {
	this->_to_sign = new_sign;
}

void Form::setExecute(int new_exec) {
	this->_to_execute = new_exec;
}

std::ostream& operator<<(std::ostream& output, Form const &toPrint) {
	output << toPrint.getName() << ", Form\n\tTo execute: " << toPrint.getExecute() << "\n\tTo sign: " << toPrint.getSign() << "\n\tAlready signed: " << (toPrint.isSigned() ? "✅ | Yes" : "❌ | No");
	return (output);
}

void Form::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->_to_execute) {
		throw FormForSupperior();
	} else if (_signed == false) {
		throw FormAlreadySigned();
	}
	else {
		std::cout << "Bureaucrat " << executor.getName() << " executes the Form " << this->_name << std::endl;
	}
}

void Form::beSigned(Bureaucrat const &bureaucrat) const {
	if (bureaucrat.getGrade() > this->_to_sign) {
		throw FormForSupperior();
	} else if (_signed == true) {
		throw FormAlreadySigned();
	}
	else {
		std::cout << "Bureaucrat " << bureaucrat.getName() << " signs the Form " << this->_name << std::endl;
		this->_signed = true;
	}
}
