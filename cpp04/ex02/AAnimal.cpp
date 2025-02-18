/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:21:46 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 20:10:59 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() {
	std::cout << "[AAnimal]\tCreating AAnimal class" << std::endl;
	type = "AAnimal";
}

AAnimal::AAnimal(AAnimal const & copy) {
	std::cout << "[AAnimal]\tCreating AAnimal class (copy)" << std::endl;
	this->type = copy.type;
}

AAnimal & AAnimal::operator=(AAnimal const & assign) {
	std::cout << "[AAnimal]\tCreating AAnimal class (assign)" << std::endl;
	this->type = assign.type;
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "[AAnimal]\tDeleting AAnimal class" << std::endl;
}

void AAnimal::makeSound() const {
	std::cout << "[AAnimal]\t🦊 | What does the fox say ?" << std::endl;
}
