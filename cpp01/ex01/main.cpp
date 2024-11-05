/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:48:46 by rparodi           #+#    #+#             */
/*   Updated: 2024/11/05 12:42:33 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		std::cerr << CLR_RED << "Error:\nYou have to use a numeric argument !\n" << CLR_RESET << CLR_BLUE << "Remember the syntax:\n\t" << argv[0] << " <name> <size>" << CLR_RESET << std::endl;
		return 1;
	}
	std::string str(argv[2]);
	if (str.length() > 10)
	{
		std::cerr << CLR_RED << "Error:\nYou can only have an integer in parameters" << CLR_RESET << std::endl;
		return 2;
	}
	int	size = std::atoll(argv[2]);
	std::string name = std::string(argv[1]);
	if (size <= 0)
	{
		std::cerr << CLR_RED << "Error:\nThe number have to be positive" << CLR_RESET << std::endl;
		return 3;
	}
	
	Zombie *horde = zombieHorde(size, name);
	if (!horde)
		return 4;

	for (int i = 0; i < size; i++)
		horde[i].announce();

	delete [] horde;
}
