/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:14:39 by rparodi           #+#    #+#             */
/*   Updated: 2025/04/03 12:04:11 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <deque>

int	main(void) {
	std::cout << CLR_GREEN << "Trying using int vector" << std::endl;
	try {
		std::vector<int> vec(100);
		for (int i = 0; i < 100; i++) {
			vec.push_back(i);
		}
		std::cout << CLR_YELLOW << "\t[ Try to find " << CLR_GOLD << "0" << CLR_YELLOW " (first value) ]" << CLR_RESET << std::endl;
		std::cout << CLR_BLUE << *easyfind(vec, 0)<< CLR_RESET << std::endl;
		std::cout << CLR_YELLOW << "\t[ Try to find " << CLR_GOLD << "42" << CLR_YELLOW " (middle value) ]" << CLR_RESET << std::endl;
		std::cout << CLR_BLUE << *easyfind(vec, 42)<< CLR_RESET << std::endl;
		std::cout << CLR_YELLOW << "\t[ Try to find " << CLR_GOLD << "99" << CLR_YELLOW " (last value) ]" << CLR_RESET << std::endl;
		std::cout << CLR_BLUE << *easyfind(vec, 99)<< CLR_RESET << std::endl;
		std::cout << CLR_YELLOW << "\t[ Try to find " << CLR_GOLD << "100" << CLR_YELLOW " (not a value) ]" << CLR_RESET << std::endl;
		std::cout << CLR_BLUE << *easyfind(vec, 100)<< CLR_RESET << std::endl;
	} catch (std::runtime_error e) {
		std::cerr << CLR_RED << e.what() << CLR_RESET << std::endl;
	}
	std::cout << std::endl << CLR_GREEN << "Trying using char list" << CLR_RESET << std::endl;
	try {
		std::list<char> lst(52);
		for (char i = 'a'; i <= 'z'; i++) {
			lst.push_back(i);
		}
		for (char i = 'A'; i <= 'Z'; i++) {
			lst.push_back(i);
		}
		std::cout << CLR_YELLOW << "\t[ Try to find " << CLR_GOLD << "a" << CLR_YELLOW " (first value) ]" << CLR_RESET << std::endl;
		std::cout << CLR_BLUE << *easyfind(lst, 'a')<< CLR_RESET << std::endl;
		std::cout << CLR_YELLOW << "\t[ Try to find " << CLR_GOLD << "A" << CLR_YELLOW " (middle value) ]" << CLR_RESET << std::endl;
		std::cout << CLR_BLUE << *easyfind(lst, 'z')<< CLR_RESET << std::endl;
		std::cout << CLR_YELLOW << "\t[ Try to find " << CLR_GOLD << "z" << CLR_YELLOW " (middle value) ]" << CLR_RESET << std::endl;
		std::cout << CLR_BLUE << *easyfind(lst, 'A')<< CLR_RESET << std::endl;
		std::cout << CLR_YELLOW << "\t[ Try to find " << CLR_GOLD << "Z" << CLR_YELLOW " (last value) ]" << CLR_RESET << std::endl;
		std::cout << CLR_BLUE << *easyfind(lst, 'Z')<< CLR_RESET << std::endl;
		std::cout << CLR_YELLOW << "\t[ Try to find " << CLR_GOLD << "\\n" << CLR_YELLOW " (not a value) ]" << CLR_RESET << std::endl;
		std::cout << CLR_BLUE << *easyfind(lst, '\n')<< CLR_RESET << std::endl;
	} catch (std::runtime_error e) {
		std::cerr << CLR_RED << e.what() << CLR_RESET << std::endl;
	}
	std::cout << std::endl << CLR_GREEN << "Trying using empty deque"<< CLR_RESET << std::endl;
	try {
		std::deque<int> deq;
		deq.clear();
		std::cout << CLR_YELLOW << "\t[ Try to find " << CLR_GOLD << "0" << CLR_YELLOW " (not a value) ]" << CLR_RESET << std::endl;
		std::cout << CLR_BLUE << *easyfind(deq, 0)<< CLR_RESET << std::endl;
	} catch (std::runtime_error e) {
		std::cerr << CLR_RED << e.what() << CLR_RESET << std::endl;
	}
}
