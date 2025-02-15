/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:21:01 by rparodi           #+#    #+#             */
/*   Updated: 2025/01/31 19:53:47 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
	std::cout << "[Animal]\tCreating the class" << std::endl;
	type = "";
}

Animal::~Animal() {
	std::cout << "[Animal]\tDeleting the class" << std::endl;
}

std::string Animal::getType() const {
	return (type);
}

void Animal::makeSound() const {
		std::cout << "🤔 | thinking how to make a sound" << std::endl;
}
