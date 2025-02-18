/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:26:17 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 20:07:56 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog();
		~Dog();
		Dog(Dog const & copy);
		Dog & operator=(Dog const & assign);
		virtual void makeSound() const;
		std::string getIdea(int const index) const;
		void setIdea(int const index, std::string const idea) const;
		Dog* clone() const;
	protected:
		Brain *brain;
		std::string type;
};

#endif
