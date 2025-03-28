/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 17:45:03 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/28 18:21:04 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void) {
	int a = 2;
	int b = 4;
	std::cout << CLR_YELLOW << "[ Testing with integer " << CLR_GOLD << a << CLR_YELLOW << " / " << CLR_GOLD << b << CLR_YELLOW << " ]" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Before:\t\t" << CLR_GOLD << a << " " << b << CLR_RESET << std::endl;
	::swap(a, b);
	std::cout << CLR_BLUE << "After:\t\t" << CLR_GOLD << a << " " << b << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Minimal:\t" << CLR_GOLD << ::min(a, b) << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Maximal:\t" << CLR_GOLD << ::max(a, b) << CLR_RESET << std::endl;
	std::cout << std::endl;
	float c = 2.4;
	float d = 4.2;
	std::cout << CLR_YELLOW << "[ Testing swap with integer " << CLR_GOLD << c << CLR_YELLOW << " / " << CLR_GOLD << d << CLR_YELLOW << " ]" << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Before:\t\t" << CLR_GOLD << c << " " << d << CLR_RESET << std::endl;
	::swap(c, d);
	std::cout << CLR_BLUE << "After:\t\t" << CLR_GOLD << c << " " << d << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Minimal:\t" << CLR_GOLD << ::min(c, d) << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Maximal:\t" << CLR_GOLD << ::max(c, d) << CLR_RESET << std::endl;
	return 0;
}
