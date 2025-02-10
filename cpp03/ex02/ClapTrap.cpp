/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 13:59:49 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/10 11:13:02 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap() {
	_name = "";
	_hit_point = 0;
	_energy_point = 0;
	_attack_damage = 0;
	
	std::cout << "\n[Init] ClapTrap (no_name)" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	_name = name;
	_hit_point = 10;
	_energy_point = 10;
	_attack_damage = 0;
	std::cout << "\n[Init] ClapTrap:\n\t" << "Name: " << _name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy) {
	_name = copy._name;
	_hit_point = copy._hit_point;
	_energy_point = copy._energy_point;
	_attack_damage = copy._attack_damage;
	std::cout << "\n[Init] ClapTrap (copy):\n\t" << "Name: " << _name << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap &assign) {
	_name = assign._name;
	_hit_point = assign._hit_point;
	_energy_point = assign._energy_point;
	_attack_damage = assign._attack_damage;
	std::cout << "\n[Init] ClapTrap (assign):\n\t" << "Name: " << _name << std::endl;
	return (assign);
}

ClapTrap::~ClapTrap() {
	std::cout << "\n[Delete] ClapTrap:\n\t" << "Name: " << _name << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (_energy_point <= 0 || _hit_point <= 0) {
		std::cerr << "\n[Attack] ClapTrap:\n\t" << "Not enough energy to attack" << std::endl;
		return ;
	}
	_energy_point--;
	std::cout << "\n[Attack] ClapTrap:\n\t" << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	_hit_point -= amount;
	std::cout << "\n[Hurt] ClapTrap:\n\t" << _name << " take " << amount << " now hit_point are " << _hit_point << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energy_point <= 0 || _hit_point <= 0) {
		std::cerr << "\n[Repair] ClapTrap:\n\t" << "Not enough energy to repair" << std::endl;
		return ;
	}
	_energy_point--;
	_hit_point += amount;
	std::cout << "\n[Repair] ClapTrap:\n\t" << _name << " repair, for an amount " << amount << " now hit_point are " << _hit_point << std::endl;
}
