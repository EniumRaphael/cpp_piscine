/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:41:01 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/10 12:10:42 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	_name = "";
	_hit_point = 0;
	_energy_point = 0;
	_attack_damage = 0;
	_gateKeeperMode = false;
	std::cout << "\n[Init] ScavTrap (no_name)" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy) {
	_name = copy._name;
	_hit_point = copy._hit_point;
	_energy_point = copy._energy_point;
	_attack_damage = copy._attack_damage;
	_gateKeeperMode = copy._gateKeeperMode;
	std::cout << "\n[Init] ScavTrap (copy):\n\t" << "Name: " << _name << std::endl;
}

ScavTrap::ScavTrap (std::string name) {
	_name = name;
	_hit_point = 100;
	_energy_point = 50;
	_attack_damage = 20;
	_gateKeeperMode = false;
	std::cout << "\n[Init] ScavTrap:\n\t" << "Name: " << _name << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap &assign) {
	_name = assign._name;
	_hit_point = assign._hit_point;
	_energy_point = assign._energy_point;
	_attack_damage = assign._attack_damage;
	_gateKeeperMode = assign._gateKeeperMode;
	std::cout << "\n[Init] ScavTrap (assign):\n\t" << "Name: " << _name << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {

}

void ScavTrap::guardGate() {
_gateKeeperMode = !_gateKeeperMode;
	std::cout << "\n[Mode] ScavTrap:\n\t" << "Name: " << _name << " the mode gate keeper is now: " << (_gateKeeperMode ? "enable" : "disable") << std::endl;
}
