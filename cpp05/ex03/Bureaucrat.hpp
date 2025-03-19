/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 14:48:33 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/18 15:13:08 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <string>
#include <iostream>
#include "Form.hpp"

#define RESET "\033[0m"
#define YELLOW "\033[0;33m"
#define RED "\033[0;31m"

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &copy);
		Bureaucrat& operator=(Bureaucrat const &assign);
		~Bureaucrat(void);
		std::string getName(void) const;
		int getGrade(void) const;
		void promote(void);
		void demote(void);
		void signForm(Form &form);
		void executeForm(Form const &form) const;
		class GradeTooHighException : public std::exception {
			virtual const char *what() const throw() {
				return ("Error:\n> Grade is too high (have to be lower than 1)");
			}
		};
		class GradeTooLowException : public std::exception {
			virtual const char *what() const throw() {
				return ("Error:\n> Grade is too low (have to be higher than 150)");
			}
		};
	private:
		std::string _name;
		int _grade;
};

std::ostream& operator<<(std::ostream& output, Bureaucrat const &bureaucrat);

#endif
