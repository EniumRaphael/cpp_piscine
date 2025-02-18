/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:21:46 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 17:19:20 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
	std::cout << "[Animal]\tCreating Animal class" << std::endl;
	type = "Animal";
}

Animal::Animal(Animal const & copy) {
	std::cout << "[Animal]\tCreating Animal class (copy)" << std::endl;
	this->type = copy.type;
}

Animal & Animal::operator=(Animal const & assign) {
	std::cout << "[Animal]\tCreating Animal class (assign)" << std::endl;
	this->type = assign.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "[Animal]\tDeleting Animal class" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "[Animal]\t🦊 | What does the fox say ?" << std::endl;
}
