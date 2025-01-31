/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:21:01 by rparodi           #+#    #+#             */
/*   Updated: 2025/01/31 19:54:23 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() {
	std::cout << "[WrongAnimal]\tCreating the class" << std::endl;
	type = "";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "[WrongAnimal]\tDeleting the class" << std::endl;
}

std::string WrongAnimal::getType() const {
	return (type);
}

void WrongAnimal::makeSound() const {
		std::cout << "🦊 | What does the fox say ?" << std::endl;
}
