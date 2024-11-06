/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:41:03 by rparodi           #+#    #+#             */
/*   Updated: 2024/11/06 18:11:34 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug()
{
	std::cout << DEBUG_MSG << std::endl;
}

void Harl::error()
{
	std::cout << ERROR_MSG << std::endl;
}

void Harl::info()
{
	std::cout << INFO_MSG << std::endl;
}

void Harl::warning()
{
	std::cout << WARN_MSG << std::endl;
}

void Harl::complain(std::string level)
{
	std::string categorie[] = {"debug", "error", "info", "warning"};
	void (Harl::*choice[4])(void) = { &Harl::debug, &Harl::error, &Harl::info, &Harl::warning };
	
	for (size_t i = 0; i < 4; i++)
		if (level == categorie[i])
			(this->*choice[i])();
}
