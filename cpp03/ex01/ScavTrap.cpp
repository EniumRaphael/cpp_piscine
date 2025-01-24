/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:41:01 by rparodi           #+#    #+#             */
/*   Updated: 2025/01/24 18:31:52 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap (std::string name) {
	_name = name;
	_hit_point = 100;
	_energy_point = 50;
	_attack_damage = 20;
	std::cout << "\n[Init] ScavTrap:\n\t" << "Name: " << _name << std::endl;
}
