/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:20:06 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/18 17:49:34 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class Bureaucrat;

class AForm {
	public:
		AForm();
		AForm(std::string const name, int execute, int sign);
		AForm(AForm const &copy);
		AForm& operator=(AForm const &assign);
		~AForm();
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
		class AFormForSupperior: public std::exception {
			virtual const char *what() const throw() {
				return ("the bureaucrat grade is too low !");
			}
		};
		class AFormAlreadySigned: public std::exception {
			virtual const char *what() const throw() {
				return ("form is already signed !");
			}
		};

		void beSigned(Bureaucrat const &bureaucrat) const;
		virtual void execute(Bureaucrat const &executor) const = 0;
		int getExecute() const;
		int getSign() const;
		std::string getName() const;
		bool isSigned() const;
		void setSign(int new_sign);
		void setExecute(int new_exec);
	private:
		std::string _name;
		mutable bool _signed;
		int _to_execute;
		int _to_sign;
};

std::ostream& operator<<(std::ostream& output, AForm const &Form);

#endif
