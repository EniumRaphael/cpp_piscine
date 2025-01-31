/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:08:09 by rparodi           #+#    #+#             */
/*   Updated: 2025/01/31 19:52:09 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << "\033[0;33m[ Building classes ]\033[0m" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* l = new WrongCat();

	std::cout << std::endl << "\033[0;33m[ Testing the getType method ]\033[0m" << std::endl;
	std::cout << "Type of j:\t" << j->getType() << std::endl;
	std::cout << "Type of i:\t" << i->getType() << std::endl;
	std::cout << "Type of l:\t" << l->getType() << std::endl;

	std::cout << std::endl << "\033[0;33m[ Testing the makeSound method ]\033[0m" << std::endl;
	std::cout << "Sound of meta:\t";
	meta->makeSound();
	std::cout << std::endl << "Sound of i:\t";
	i->makeSound();
	std::cout << std::endl << "Sound of j:\t";
	j->makeSound();
	std::cout << std::endl << "Sound of k:\t";
	k->makeSound();
	std::cout << std::endl << "Sound of l:\t";
	l->makeSound();
	std::cout << std::endl << "\033[0;33m[ Deleting classes ]\033[0m" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete k;
	delete l;
	return 0;
}
