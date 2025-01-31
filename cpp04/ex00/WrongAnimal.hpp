/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:44:54 by rparodi           #+#    #+#             */
/*   Updated: 2025/01/31 19:34:06 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		virtual void makeSound() const;
		std::string getType() const;
	protected:
		std::string type;
	private:
};

#endif
