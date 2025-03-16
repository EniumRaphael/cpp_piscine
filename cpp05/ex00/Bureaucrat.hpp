/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 14:48:33 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/16 14:52:32 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const &copy);
		Bureaucrat& operator=(Bureaucrat const &assign);
		~Bureaucrat(void);
		std::string getName(void) const;
		int getGrade(void) const;
	private:
		std::string const _name;
		int _grade;
};
