/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:22:05 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 20:06:18 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
	std::cout << "[Cat]\t\tCreating Cat class" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(Cat const & copy) {
    std::cout << "[Cat]\t\tCreating Cat class (copy)" << std::endl;
    this->type = copy.type;
    this->brain = new Brain(*copy.brain);
}

Cat & Cat::operator=(Cat const & assign) {
	if (this != &assign) {
		std::cout << "[Cat]\t\tCreating Cat class (assign)" << std::endl;
		this->type = assign.type;
		for (int i = 0; i < 100; i++)
			this->brain[i] = assign.brain[i];
	}
	return *this;
}

Cat* Cat::clone() const {
	return new Cat(*this);
}

Cat::~Cat() {
	delete brain;
	std::cout << "[Cat]\t\tDeleting Cat class" << std::endl;
}

void Cat::setIdea(int const index, std::string const idea) const {
	brain->setIdea(index, idea);
}

std::string Cat::getIdea(int const index) const {
	return brain->getIdea(index);
}

void Cat::makeSound() const {
	std::cout << "[Cat]\t\t🐱 | Meow meow" << std::endl;
}
