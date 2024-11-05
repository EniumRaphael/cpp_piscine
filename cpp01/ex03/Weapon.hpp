/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:24:43 by rparodi           #+#    #+#             */
/*   Updated: 2024/11/05 14:25:09 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon();
		std::string getType();
		void setType(std::string type);
	private:
		std::string _type;
};

#define CLR_RESET       "\033[0m"

#define CLR_YELLOW "\033[0;33m"
#define CLR_GOLD "\033[38;5;220m"

#define CLR_BLUE "\033[0;34m"
#define CLR_CYAN "\033[0;36m"

#endif
