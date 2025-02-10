/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:50:07 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/10 10:52:17 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void) {
	std::cout << "[Broadcast]\n\tIn the Blue corner the actual cat of the 42 school !" << std::endl;
	ClapTrap test("Moulinette");
	test.beRepaired(32);
	return (0);
}
