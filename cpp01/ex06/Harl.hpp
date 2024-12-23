/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:37:15 by rparodi           #+#    #+#             */
/*   Updated: 2024/12/23 12:37:22 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
	#define HARL_HPP
	
	#include <string>
	#include <iostream>
	
	#define DEBUG_MSG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"
	#define ERROR_MSG "This is unacceptable! I want to speak to the manager now."
	#define INFO_MSG "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	#define WARN_MSG "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
	
	class Harl
	{
		public:
			Harl();
			~Harl();
			void complain(std::string level);
		private:
			void debug(void);
			void info(void);
			void warning(void);
			void error(void);
	};

#endif
