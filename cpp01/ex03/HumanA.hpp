/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:34:19 by rparodi           #+#    #+#             */
/*   Updated: 2024/12/23 12:38:16 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
	#define HUMANA_HPP
	
	#include "Weapon.hpp"
	#include <iostream>
	#include <string>
	
	class HumanA {
		public:
			HumanA(std::string name, Weapon &toGive);
			~HumanA();
			void attack();
		private:
			std::string _name;
			Weapon *_weapon;
	};

#endif
