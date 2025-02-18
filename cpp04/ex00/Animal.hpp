/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:21:56 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 16:24:40 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
	public:
		Animal();
		virtual ~Animal();
		Animal(Animal const & copy);
		Animal & operator=(Animal const & assign);
		virtual void makeSound() const;

	protected:
		std::string type;
};

#endif
