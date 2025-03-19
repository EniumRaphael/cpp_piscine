/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 15:52:06 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/19 15:54:51 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

#define ROBOT_SIGN_GRADE 72
#define ROBOT_EXEC_GRADE 45

class RobotomyRequestForm: public Form {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		RobotomyRequestForm& operator=(RobotomyRequestForm const &assign);
		virtual void execute(Bureaucrat const &executor) const;
		std::string getTarget() const;
	private:
		std::string _target;
};

#endif
