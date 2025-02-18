/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:26:17 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 16:27:11 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		~Dog();
		Dog(Dog const & copy);
		Dog & operator=(Dog const & assign);
		virtual void makeSound() const;
	protected:
		std::string type;
};

#endif
