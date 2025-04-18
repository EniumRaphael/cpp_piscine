/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 23:13:16 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/17 11:54:45 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(ScavTrap const &copy);
		ScavTrap(std::string name);
		ScavTrap& operator=(ScavTrap &assign);
		~ScavTrap();
		void guardGate();
	protected:

	private:
		bool _gateKeeperMode;
	
};

#endif
