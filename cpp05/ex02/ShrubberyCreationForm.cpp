/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:05:02 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/19 15:52:44 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", SHRUB_SIGN_GRADE, SHRUB_EXEC_GRADE) {
	std::cout << "ShrubberyCreationForm default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", SHRUB_SIGN_GRADE, SHRUB_EXEC_GRADE) {
	_target = target;
	std::cout << "ShrubberyCreationForm smart constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : AForm("ShrubberyCreationForm", SHRUB_SIGN_GRADE, SHRUB_EXEC_GRADE) {
	_target = copy.getTarget();
	*this = copy;
	std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm const & assign )
{
	std::cout << "Copy assignement operator called" << std::endl;
	setSign(assign.getSign());
	setExecute(assign.getExecute());
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const {
	return _target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->getExecute()) {
		throw AForm::GradeTooLowException();
	} else {
		std::string filename = this->getTarget() + "_shrubbery";
		std::fstream file(filename.c_str(), std::ios::out);
		file << \
			"       _-_" << std::endl << \
			"    /~~   ~~\\" << std::endl << \
			" /~~         ~~\\" << std::endl << \
			"{               }" << std::endl << \
			" \\  _-     -_  /" << std::endl << \
			"   ~  \\\\ //  ~" << std::endl << \
			"_- -   | | _- _" << std::endl << \
			"  _ -  | |   -_" << std::endl << \
			"      // \\\\" << std::endl << std::endl << \
			"       _-_" << std::endl << \
			"    /~~   ~~\\" << std::endl << \
			" /~~         ~~\\" << std::endl << \
			"{               }" << std::endl << \
			" \\  _-     -_  /" << std::endl << \
			"   ~  \\\\ //  ~" << std::endl << \
			"_- -   | | _- _" << std::endl << \
			"  _ -  | |   -_" << std::endl << \
			"      // \\\\" << std::endl << std::endl;
				}
}
