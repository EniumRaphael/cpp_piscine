/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:34:23 by rparodi           #+#    #+#             */
/*   Updated: 2024/11/05 14:29:33 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &toGive)
{
	_name = name;
	_weapon = &toGive;
}

HumanA::~HumanA()
{

}

void HumanA::attack()
{
	std::cout << CLR_GOLD << _name << CLR_YELLOW << " attacks with their " << CLR_GOLD << _weapon->getType() << CLR_RESET << std::endl;
}
