/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:50:07 by rparodi           #+#    #+#             */
/*   Updated: 2025/01/14 22:04:48 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void) {
	std::cout << "[Broadcast]\n\tIn the Red corner the first cat of the 42 school !" << std::endl;
	ClapTrap test("Norminet");
	test.attack("Moulinette");
	test.takeDamage(42);
	test.beRepaired(42);
	std::cout << "\n\n[Broadcast]\n\tIn the Blue corner the actual cat of the 42 school !" << std::endl;
	ClapTrap test2("Moulinette");
	test2.beRepaired(32);
	return (0);
}
