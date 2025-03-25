/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:54:05 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/25 14:14:40 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

void is_worked(int integer, std::string string, std::string name)
{
	Data data;
	data.integer = integer;
	data.string = string;
	uintptr_t serialized = Serializer::serialize(&data);
	Data* deserialized;
	try {
		deserialized = Serializer::deserialize(serialized);
	} catch (std::exception &e) {
		std::cout << CLR_RED << e.what() << CLR_RESET << std::endl;
		return;
	}
	std::cout << CLR_YELLOW << "\t[ Testing " << name << " ]" << CLR_RESET << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Serialized:" << std::endl << "\t" << CLR_GOLD << serialized << CLR_RESET << std::endl;
	std::cout << CLR_BLUE << "Deserialized:" << std::endl << "\t" << CLR_GOLD << deserialized->string << std::endl << "\t" << deserialized->integer << std::endl << CLR_RESET << std::endl;
}

int	main(void) {
	is_worked(42, "Student at", "42 / Student at");
	is_worked(1337, "Leet code", "1337 / leet code");
	is_worked(0, "", "NULL");
	return 0;
}
