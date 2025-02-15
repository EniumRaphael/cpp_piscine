/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:40:30 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/10 12:19:22 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() {
	std::cout << "[Dog]\t\tCreating the class" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::~Dog() {
	delete brain;
	std::cout << "[Dog]\t\tDeleting the class" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "🐶 | Wouf Wouf" << std::endl;
}
