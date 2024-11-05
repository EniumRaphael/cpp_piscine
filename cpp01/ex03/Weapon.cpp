/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:28:55 by rparodi           #+#    #+#             */
/*   Updated: 2024/11/05 13:34:38 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{

}

std::string Weapon::getType()
{
	return (_type);
}

void Weapon::setType(std::string type)
{
	_type = type;
}
