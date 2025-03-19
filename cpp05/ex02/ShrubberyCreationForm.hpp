/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 12:15:09 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/19 15:45:37 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

#define SHRUB_SIGN_GRADE 145
#define SHRUB_EXEC_GRADE 137

class ShrubberyCreationForm: public AForm {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &assign);
		virtual void execute(Bureaucrat const &executor) const;
		std::string getTarget() const;
	private:
		std::string _target;
};

#endif
