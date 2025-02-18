/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:21:46 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 16:50:06 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() {
	std::cout << "[WrongAnimal]\tCreating WrongAnimal class" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const & copy) {
	std::cout << "[WrongAnimal]\tCreating WrongAnimal class (copy)" << std::endl;
	this->type = copy.type;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & assign) {
	std::cout << "[WrongAnimal]\tCreating WrongAnimal class (assign)" << std::endl;
	this->type = assign.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "[WrongAnimal]\tDeleting cat class" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "[WrongAnimal]\t🦊 | What does the fox say ?" << std::endl;
}
