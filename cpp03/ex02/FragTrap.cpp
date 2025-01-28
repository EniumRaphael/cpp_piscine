/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:41:01 by rparodi           #+#    #+#             */
/*   Updated: 2025/01/28 14:02:17 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap (std::string name) {
	_name = name;
	_hit_point = 100;
	_energy_point = 100;
	_attack_damage = 30;
	std::cout << "\n[Init] FragTrap:\n\t" << "Name: " << _name << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "\n[Clap] FragTrap:\n\t" << "Name:" << _name << " Hey bro can i get an high five ? Thanks u brother !" << _name << "Hey bro can i get an high five ? Thanks u brother !" << std::endl;
}
