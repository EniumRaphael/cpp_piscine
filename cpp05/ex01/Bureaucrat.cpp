/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 14:49:52 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/17 21:45:02 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <ostream>

/**
 * @brief Constructor by default of Bureaucrat
 */
Bureaucrat::Bureaucrat(void) : _name("Roger"), _grade(150) {
	std::cout << "[Bureaucrat] Default constructor called" << std::endl;
}

/**
 * @brief Better constructor easier to test
 *
 * @param name the name of the Bureaucrat
 * @param grade grade to start the carreer
 */
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	std::cout << "[Bureaucrat] Smart constructor called" << std::endl;
	if (grade < 1) {
		throw GradeTooHighException();
	} else if (grade > 150) {
		throw GradeTooLowException();
	} else {
		this->_grade = grade;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy) : _name(copy._name), _grade(copy._grade) {
	std::cout << "[Bureaucrat] Copy constructor called" << std::endl;
}

/**
 * @brief Constructor with the operator '=' (Overload)
 *
 * @param assign Bureaucrat to copie
 * @return It's a constructor
 */
Bureaucrat& Bureaucrat::operator=(Bureaucrat const & assign) {
	std::cout << "[Bureaucrat] Assign constructor called" << std::endl;
	this->_grade = assign._grade;
	this->_name = assign._name;
	return *this;
}

/**
 * @brief Destructor for the Bureaucrat 
 */
Bureaucrat::~Bureaucrat() {
	std::cout << "[Bureaucrat] Desctuctor called" << std::endl;

}

/**
 * @brief Getter for the grade
 *
 * @return grade (unsigned int 8bits)
 */
int Bureaucrat::getGrade() const {
	return (this->_grade);
}

/**
 * @brief Getter for the name
 *
 * @return name (string from standard)
 */
std::string Bureaucrat::getName() const {
	return (this->_name);
}

/**
 * @brief Get a promotion for the Bureaucrat
 */
void Bureaucrat::promote() {
	if (this->_grade == 1) {
		throw GradeTooHighException();
	} else {
		--this->_grade;
	}
}

/**
 * @brief Get a demotion for the Bureaucrat
 */
void Bureaucrat::demote() {
	if (this->_grade == 150) {
		throw GradeTooLowException();
	} else {
		++this->_grade;
	}
}
/**
 * @brief Overload of the '<<' operator to print
 *
 * @param output previous output
 * @param toPrint Bureaucrat to print
 * @return the output with the Bureaucrat
 */
std::ostream& operator<<(std::ostream& output, Bureaucrat const &toPrint) {
	output << toPrint.getName() << ", bureaucrat grade " << toPrint.getGrade() << ".";
	return (output);
}

void Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
	} catch (std::exception &e) {
		std::cout << this->getName() << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}
