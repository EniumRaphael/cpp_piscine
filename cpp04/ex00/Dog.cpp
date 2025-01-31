/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:40:30 by rparodi           #+#    #+#             */
/*   Updated: 2025/01/30 13:40:51 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "[Dog] Creating the class" << std::endl;
	type = "Dog";
}

Dog::~Dog() {
	std::cout << "[Dog] Deleting the class" << std::endl;
}

std::string Dog::getType() {
	return (type);
}
