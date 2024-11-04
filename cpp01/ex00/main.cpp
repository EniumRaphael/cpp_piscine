/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:48:46 by rparodi           #+#    #+#             */
/*   Updated: 2024/11/04 16:40:59 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main()
{
	Zombie roger = Zombie("Roger");
	roger.announce();
	Zombie *nathe = newZombie("Na");
	nathe->announce();
	delete nathe;
	randomChump("Brancheuh");
}
