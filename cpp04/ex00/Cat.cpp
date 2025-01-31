/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:32:43 by rparodi           #+#    #+#             */
/*   Updated: 2025/01/30 13:38:46 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "[Cat] Creating the class" << std::endl;
	type = "Cat";
}

Cat::~Cat() {
	std::cout << "[Cat] Deleting the class" << std::endl;
}

std::string Cat::getType() {
	return (type);
}
