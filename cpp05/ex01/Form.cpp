/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:19:41 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/17 20:17:10 by rparodi          ###   ########.fr       */
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

std::ostream& operator<<(std::ostream& output, Form const &toPrint) {
	output << toPrint.getName() << ", Form\n\tTo execute: " << toPrint.getExecute() << "\n\tTo sign: " << toPrint.getSign() << "\n\tAlready signed: " << (toPrint.isSigned() ? "✅ | Yes" : "❌ | No");
	return (output);
}

void Form::beSigned(Bureaucrat &bureaucrat) {
	try {
		bureaucrat.signForm(*this);
	} catch (std::exception & err) {
		std::cerr << err.what() << std::endl;
	}
	_signed = true;
}
