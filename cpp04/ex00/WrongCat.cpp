/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:22:05 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 16:53:06 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
	std::cout << "[WrongCat]\t\tCreating WrongCat class" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & copy) {
	std::cout << "[WrongCat]\t\tCreating WrongCat class (copy)" << std::endl;
	this->type = copy.type;
}

WrongCat & WrongCat::operator=(WrongCat const & assign) {
	std::cout << "[WrongCat]\t\tCreating WrongCat class (assign)" << std::endl;
	this->type = assign.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "[WrongCat]\t\tDeleting WrongCat class" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "[WrongCat]\t\t🐱 | Wouf wouf" << std::endl;
}
