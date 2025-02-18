/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:22:11 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 20:12:27 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "color.hpp"
#include <iostream>
#include <ostream>

int main() {
	const int nb = 42;

	if (nb % 2 != 0) {
		std::cerr << RED << "Error: Please enter an odd number." << RESET << std::endl;
		return 1;
	}
	if (nb < 0) {
		std::cerr << RED << "Error: Please enter a positive number." << RESET << std::endl;
		return 2;
	}

	AAnimal *tab[nb];

	std::cout << YELLOW << "\t\t[ Constructor ]" << RESET << std::endl;
	for (int i = 0; i < nb && i < nb; i++) {
		std::cout << std::endl << BLUE << "(" << i + 1 << ")\t" << RESET << std::endl;
		if (i % 2 == 0)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}

	std::cout << std::endl << YELLOW << "\t\t[ Make Sound ]" << RESET << std::endl;
	for (int i = 0; i < nb && i < nb; i++) {
		std::cout << std::endl << BLUE << "(" << i + 1 << ")\t" << RESET;
		tab[i]->makeSound();
	}

	std::cout << std::endl << YELLOW << "\t\t[ Destructor ]" << RESET << std::endl;
	for (int i = 0; i < nb && i < nb; i++) {
		std::cout << std::endl << BLUE << "(" << i + 1 << ")\t" << RESET << std::endl;
		delete tab[i];
	}

	std::cout << std::endl << YELLOW << "\t\t[ Brains deepCopy ]" << RESET << std::endl;
	AAnimal *cat = new Cat();
	AAnimal *newCat;

	newCat = cat->clone();
	std::cout << cat->getIdea(41) << " "<< __LINE__ << std::endl;
	cat->setIdea(41, "🧠 | New Idea");
	std::cout << cat->getIdea(41) << " "<< __LINE__ << std::endl;
	std::cout << newCat->getIdea(41) << " "<< __LINE__ << std::endl;

	delete cat;
	delete newCat;

	return 0;
}
