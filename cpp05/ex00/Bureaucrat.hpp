/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 14:48:33 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/16 22:01:02 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <string>
#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, u_int8_t grade);
		Bureaucrat(Bureaucrat const &copy);
		Bureaucrat& operator=(Bureaucrat const &assign);
		~Bureaucrat(void);
		std::string getName(void) const;
		u_int8_t getGrade(void) const;
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
		u_int8_t _grade;
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const &bureaucrat);
