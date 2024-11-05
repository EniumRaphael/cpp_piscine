/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:34:23 by rparodi           #+#    #+#             */
/*   Updated: 2024/11/05 14:46:40 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_isArmed = false;
	_weaponGiven = NULL;
}

HumanB::~HumanB()
{

}

void HumanB::setWeapon(Weapon &_toGive)
{
	_isArmed = true;
	_weaponGiven = &_toGive;
}

void HumanB::attack()
{
	if (_isArmed == true)
		std::cout << CLR_GOLD << _name << CLR_YELLOW << " attacks with their " << CLR_GOLD << _weaponGiven->getType() << CLR_RESET << std::endl;
}
