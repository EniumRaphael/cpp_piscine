/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:20:06 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/17 22:00:37 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form {
	public:
		Form();
		Form(std::string const name, int execute, int sign);
		Form(Form const &copy);
		Form& operator=(Form const &assign);
		~Form();
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
		class FormForSupperior: public std::exception {
			virtual const char *what() const throw() {
				return ("the bureaucrat grade is too low !");
			}
		};
		class FormAlreadySigned: public std::exception {
			virtual const char *what() const throw() {
				return ("form is already signed !");
			}
		};

		std::string getName() const;
		void beSigned(Bureaucrat &bureaucrat);
		int getExecute() const;
		int getSign() const;
		bool isSigned() const;
	private:
		std::string _name;
		bool _signed;
		int _to_execute;
		int _to_sign;
};

std::ostream& operator<<(std::ostream& output, Form const &Form);

#endif
