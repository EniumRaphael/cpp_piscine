/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:45:25 by rparodi           #+#    #+#             */
/*   Updated: 2025/05/07 14:56:58 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <cctype>
#include <cerrno>
#include <cstdlib>
#include <iostream>
#include <sys/time.h>
#include <deque>
#include <vector>

#define CLR_RESET "\033[0m"

#define CLR_BLACK "\033[0;30m"
#define CLR_RED "\033[0;31m"
#define CLR_GREEN "\033[0;32m"
#define CLR_YELLOW "\033[0;33m"
#define CLR_BLUE "\033[0;34m"
#define CLR_MAGENTA "\033[0;35m"
#define CLR_CYAN "\033[0;36m"
#define CLR_WHITE "\033[0;37m"
#define CLR_GOLD "\033[38;5;220m"
#define CLR_GREY "\033[38;5;240m"

template <typename t>
typename t::iterator binaryInsert(t& container, int value) {
	typename t::iterator it = std::lower_bound(container.begin(), container.end(), value);
	container.insert(it, value);
	return it;
}

template <typename t>
void print_container(t& container, bool sorted) {
	std::cout << std::endl << CLR_YELLOW << (sorted ? "Before: " : "After: ");
	for (size_t i = 0; i < container.size(); ++i) {
		std::cout << CLR_GOLD << container[i] << " ";
	}
	std::cout << CLR_RESET << std::endl;
}

template <typename t>
void FordJohnson(t &container) {
	if (container.size() < 2)
		return;
	t main;
	t tmp;

	for (size_t i = 0; i + 1 < container.size(); i += 2) {
		int a = container[i];
		int b = container[i + 1];
		if (a > b)
			std::swap(a, b);
		main.push_back(b);
		tmp.push_back(a);
	}
	if (container.size() % 2 != 0) {
		tmp.push_back(container.back());
	}
	std::sort(main.begin(), main.end());
	for (size_t i = 0; i < tmp.size(); ++i) {
		binaryInsert(main, tmp[i]);
	}
	container = main;
}

template <typename t>
t convert(int argc, char **argv) {
	t container;
	for (size_t i = 1 ; i < static_cast<size_t>(argc); i++) {
		errno = 0;
		int value = std::strtol(argv[i], 0, 10);
		if (errno == ERANGE || value < 0) {
			std::cerr << CLR_RED << "Error: I don't accept number over INT_MAX" << CLR_RESET << std::endl;
			std::exit(1);
		}
		container.push_back(value);
	}
	return container;
}

#ifndef DEBUG
#define DEBUG 0
#endif
