/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 19:43:54 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/19 20:29:37 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	private:
		Form *_ptr;
	public:
		Intern();
		Intern(Intern const & copy);
		Intern& operator= (Intern const & assign);
		~Intern();
		Form* makeForm(std::string type, std::string target);
};

#endif
