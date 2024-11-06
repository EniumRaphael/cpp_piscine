/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:41:03 by rparodi           #+#    #+#             */
/*   Updated: 2024/11/06 20:10:59 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug()
{
	std::cout << "[DEBUG]" << std::endl << DEBUG_MSG << std::endl;
	Harl::info();
}

void Harl::info()
{
	std::cout << "[INFO]" << std::endl  << INFO_MSG << std::endl;
	Harl::warning();
}

void Harl::warning()
{
	std::cout << "[WARNING]" << std::endl  << WARN_MSG << std::endl;
	Harl::error();
}

void Harl::error()
{
	std::cout << "[ERROR]" << std::endl  << ERROR_MSG << std::endl;
}

void Harl::complain(std::string level)
{
	std::string categorie[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t i;

	for (i = 0; i < 4; i++)
		if (level == categorie[i])
			break ;
	switch (i)
	{
		case 0:
			this->debug();
			break;
		case 1:
			this->info();
			break;
		case 2:
			this->warning();
			break;
		case 3:
			this->error();
			break;
		default:
			return ;
	}

}
