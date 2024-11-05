/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:34:19 by rparodi           #+#    #+#             */
/*   Updated: 2024/11/05 14:32:31 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &_toGive);
	private:
		std::string _name;
		bool _isArmed;
		Weapon *_weaponGiven;
};

#endif
