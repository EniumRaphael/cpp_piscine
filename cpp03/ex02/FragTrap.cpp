/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:41:01 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/10 12:10:09 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	_name = "";
	_hit_point = 0;
	_energy_point = 0;
	_attack_damage = 0;
	std::cout << "\n[Init] FragTrap (no_name)" << std::endl;
}

FragTrap::FragTrap (std::string name) {
	_name = name;
	_hit_point = 100;
	_energy_point = 100;
	_attack_damage = 30;
	std::cout << "\n[Init] FragTrap:\n\t" << "Name: " << _name << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy) {
	_name = copy._name;
	_hit_point = copy._hit_point;
	_energy_point = copy._energy_point;
	_attack_damage = copy._attack_damage;
	std::cout << "\n[Init] FragTrap (copy):\n\t" << "Name: " << _name << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap &assign) {
	_name = assign._name;
	_hit_point = assign._hit_point;
	_energy_point = assign._energy_point;
	_attack_damage = assign._attack_damage;
	std::cout << "\n[Init] FragTrap (assign):\n\t" << "Name: " << _name << std::endl;
	return (*this);
}

FragTrap::~FragTrap() {

}

void FragTrap::highFivesGuys() {
	std::cout << "\n[Clap] FragTrap:\n\t" << "Name:" << _name << " Hey bro can i get an high five ? Thanks u brother !" << _name << "Hey bro can i get an high five ? Thanks u brother !" << std::endl;
}
