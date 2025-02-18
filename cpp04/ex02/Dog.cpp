/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:22:02 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 20:13:30 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
	std::cout << "[Dog]\t\tCreating Dog class" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(Dog const & copy) {
	std::cout << "[Dog]\t\tCreating Dog class (copy)" << std::endl;
	this->type = copy.type;
	this->brain = new Brain();
}

Dog & Dog::operator=(Dog const & assign) {
	std::cout << "[Dog]\t\tCreating Dog class (assign)" << std::endl;
	(void)assign;
	this->brain = new Brain();
	return *this;
}

std::string Dog::getIdea(int index) const {
	return brain->getIdea(index);
}

void Dog::setIdea(int const index, std::string const idea) const {
	return brain->setIdea(index, idea);
}

Dog* Dog::clone() const {
	std::cout << "[Dog]\t\tCopying Dog class (DeepCopy)" << std::endl;
	return new Dog(*this);
}

Dog::~Dog() {
	delete brain;
	std::cout << "[Dog]\t\tDeleting Dog class" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "[Dog]\t\t🐶 | Wouf wouf" << std::endl;
}
