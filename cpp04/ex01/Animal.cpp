/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:21:01 by rparodi           #+#    #+#             */
/*   Updated: 2025/01/30 13:37:51 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
	std::cout << "[Animal] Creating the class" << std::endl;
	type = "";
}

Animal::~Animal() {
	std::cout << "[Animal] Deleting the class" << std::endl;
}

void Animal::makeSound() {
	if (type.compare("Cat"))
		std::cout << "🐱 | Meow Meow" << std::endl;
	else if (type.compare("Dog"))
		std::cout << "🐶 | Wouf Wouf" << std::endl;
	else
		std::cout << "🤔 | thinking how to make a sound" << std::endl;
}
