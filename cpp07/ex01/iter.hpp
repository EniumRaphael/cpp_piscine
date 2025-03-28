/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 18:51:06 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/28 19:20:00 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <string>

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

#define CLR_LIGHT_BLACK "\033[0;90m"
#define CLR_LIGHT_RED "\033[0;91m"
#define CLR_LIGHT_GREEN "\033[0;92m"
#define CLR_LIGHT_YELLOW "\033[0;93m"
#define CLR_LIGHT_BLUE "\033[0;94m"
#define CLR_LIGHT_MAGENTA "\033[0;95m"
#define CLR_LIGHT_CYAN "\033[0;96m"
#define CLR_LIGHT_WHITE "\033[0;97m"

#define CLR_BOLD_BLACK "\033[1;30m"
#define CLR_BOLD_RED "\033[1;31m"
#define CLR_BOLD_GREEN "\033[1;32m"
#define CLR_BOLD_YELLOW "\033[1;33m"
#define CLR_BOLD_BLUE "\033[1;34m"
#define CLR_BOLD_MAGENTA "\033[1;35m"
#define CLR_BOLD_CYAN "\033[1;36m"
#define CLR_BOLD_WHITE "\033[1;37m"

template <typename T>
void iter(T array[], size_t size, void (*f)(T const &)) {
	for (size_t i = 0; i < size; i++) {
		f(array[i]);
	}
	return;
}

template <typename T>
void colors(T const &value) {
	std::cout << CLR_GOLD << value << CLR_RESET << " ";
}

template <typename T>
void tentimes(T const &value) {
	std::cout << CLR_GOLD << value * 10 << CLR_RESET << " ";
}
