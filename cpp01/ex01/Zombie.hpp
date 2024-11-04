/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:03:03 by rparodi           #+#    #+#             */
/*   Updated: 2024/11/04 20:38:39 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <cstdlib>
#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void announce(void);
		void setName( std::string name );
	private:
		std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
