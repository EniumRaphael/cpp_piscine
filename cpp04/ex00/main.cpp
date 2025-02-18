/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:22:11 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/18 16:48:50 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "color.hpp"
#include <iostream>
#include <ostream>

int main() {
	std::cout << YELLOW << "\t\t[ Constructor ]" << RESET << std::endl;
	const Animal* theClassic = new Animal();
	const Animal* theDog = new Dog();
	const Animal* theCat = new Cat();
	const WrongAnimal* theBadAnimal = new WrongAnimal();
	const WrongAnimal* theBadCat = new WrongCat();

	std::cout << std::endl << YELLOW << "\t\t[ Make Sound ]" << RESET << std::endl;
	theClassic->makeSound();
	theDog->makeSound();
	theCat->makeSound();
	theBadAnimal->makeSound();
	theBadCat->makeSound();

	std::cout << std::endl << YELLOW << "\t\t[ Destructor ]" << RESET << std::endl;
	delete theClassic;
	delete theDog;
	delete theCat;
	delete theBadAnimal;
	delete theBadCat;
	return 0;
}
