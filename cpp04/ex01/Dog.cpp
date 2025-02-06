/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:40:30 by rparodi           #+#    #+#             */
/*   Updated: 2025/01/31 19:53:02 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "[Dog]\t\tCreating the class" << std::endl;
	type = "Dog";
}

Dog::~Dog() {
	std::cout << "[Dog]\t\tDeleting the class" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "🐶 | Wouf Wouf" << std::endl;
}
