/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:22:02 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 16:51:41 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
	std::cout << "[Dog]\t\tCreating Dog class" << std::endl;
	type = "Dog";
}

Dog::Dog(Dog const & copy) {
	std::cout << "[Dog]\t\tCreating Dog class (copy)" << std::endl;
	this->type = copy.type;
}

Dog & Dog::operator=(Dog const & assign) {
	std::cout << "[Dog]\t\tCreating Dog class (assign)" << std::endl;
	this->type = assign.type;
	return *this;
}

Dog::~Dog() {
	std::cout << "[Dog]\t\tDeleting dog class" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "[Dog]\t\t🐶 | Wouf wouf" << std::endl;
}
