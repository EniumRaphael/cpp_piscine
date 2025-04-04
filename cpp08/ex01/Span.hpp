/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:54:05 by rparodi           #+#    #+#             */
/*   Updated: 2025/04/04 15:02:53 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <exception>
#include <stdexcept>
#include <limits>

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

class Span {
	public:
		Span();
		Span(unsigned int size);
		Span(Span const &copy);
		Span& operator=(const Span &assign);
		~Span();
		void addNumber(int number);
		void addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);
		unsigned int shortestSpan();
		unsigned int longestSpan();
	private:
		unsigned int _max;
		unsigned int _size;
		std::vector<int> _vec;
};
