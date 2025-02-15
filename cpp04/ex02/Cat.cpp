/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:32:43 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/10 12:22:32 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "[Cat]\t\tCreating the class" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::~Cat() {
	delete brain;
	std::cout << "[Cat]\t\tDeleting the class" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "🐱 | Meow Meow" << std::endl;
}
