/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:09:17 by rparodi           #+#    #+#             */
/*   Updated: 2024/11/05 14:49:27 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	std::cout << CLR_BLUE << "First test:" << CLR_RESET << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << std::endl << CLR_BLUE << "Second test:" << CLR_RESET << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	std::cout << std::endl << CLR_BLUE << "Third test:" << CLR_RESET << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jimmy");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
		club.setType("some an other than the other type of club");
		jim.attack();
		club.setType("some other type of club but not the same of the first or the second !");
		jim.attack();
	}
	return (0);
}
