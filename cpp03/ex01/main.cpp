/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:50:07 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/10 10:52:36 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main(void) {
	std::cout << "[Broadcast]\n\tIn the Blue corner the actual cat of the 42 school !" << std::endl;
	ClapTrap test("Moulinette");
	test.beRepaired(32);
	std::cout << "\n\n[Broadcast]\n\tIn the Red corner the first cat of the 42 school !" << std::endl;
	ScavTrap test2("Norminet");
	test2.attack("Moulinette");
	test2.takeDamage(42);
	test2.beRepaired(42);
	test2.guardGate();
	test2.guardGate();
	test2.guardGate();
	return (0);
}
