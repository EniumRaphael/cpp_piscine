/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:48:46 by rparodi           #+#    #+#             */
/*   Updated: 2024/11/04 20:38:40 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		std::cerr << "Error:\nYou have to use a numeric argument !\nRemember the syntax:\n\t" << argv[0] << " <name> <size>" << std::endl;
		return 1;
	}
	std::string str(argv[2]);
	if (str.length() > 10)
	{
		std::cerr << "Error:\nYou can only have an integer in parameters" << std::endl;
		return 2;
	}
	int	size = std::atoll(argv[2]);
	std::string name = std::string(argv[1]);
	if (size <= 0)
	{
		std::cerr << "Error:\nThe number have to be positive" << std::endl;
		return 3;
	}
	
	Zombie *horde = zombieHorde(size, name);
	if (!horde)
		return 4;

	for (int i = 0; i < size; i++)
		horde[i].announce();

	delete [] horde;
}
