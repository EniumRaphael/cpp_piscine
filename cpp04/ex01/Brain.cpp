/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:57:51 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 18:45:33 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain() {
	std::cout << "[Brain]\t\tCreating Brain class" << std::endl;
	for (int i = 0; i < 100; i++) {
		std::stringstream oss;
		oss << "🧠 | Idea " << (i + 1);
		ideas[i] = oss.str();
	}
}

Brain::Brain(Brain const & copy) {
	std::cout << "[Brain]\t\tCreating Brain class (copy)" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = std::string(copy.ideas[i]);
	}
}

Brain& Brain::operator=(Brain const & assign) {
	if (this != &assign) {
		std::cout << "[Brain]\t\tCreating Brain class (assign)" << std::endl;
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = std::string(assign.ideas[i]);
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "[Brain]\t\tDeleting Brain class" << std::endl;
}

std::string Brain::getIdea(int index) const {
	return ideas[index % 100];
}

void Brain::setIdea(int index, std::string idea) {
	this->ideas[index % 100] = idea;
}
