/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:10:21 by rparodi           #+#    #+#             */
/*   Updated: 2024/11/05 12:39:33 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	//Can't use the default keyword :c
}

Zombie::~Zombie()
{
	std::cout << CLR_YELLOW << "Zombie's hunter: killed " << CLR_RESET << CLR_GOLD << _name << CLR_RESET << std::endl;
}

void Zombie::setName( std::string name )
{
	_name = name;
}

void Zombie::announce()
{
	std::cout << CLR_BOLD_GREEN << _name << CLR_RESET << CLR_LIGHT_GREEN <<": BraiiiiiiinnnzzzZ..." << CLR_RESET << std::endl;
}
