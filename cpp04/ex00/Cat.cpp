/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:22:05 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 16:41:28 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
	std::cout << "[Cat]\t\tCreating cat class" << std::endl;
	type = "Cat";
}

Cat::Cat(Cat const & copy) {
	std::cout << "[Cat]\t\tCreating cat class (copy)" << std::endl;
	this->type = copy.type;
}

Cat & Cat::operator=(Cat const & assign) {
	std::cout << "[Cat]\t\tCreating cat class (assign)" << std::endl;
	this->type = assign.type;
	return *this;
}

Cat::~Cat() {
	std::cout << "[Cat]\t\tDeleting cat class" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "[Cat]\t\t🐱 | Meow meow" << std::endl;
}
