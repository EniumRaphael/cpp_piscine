/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:32:43 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/10 12:48:59 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "[WrongCat]\tCreating the class" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "[WrongCat]\tDeleting the class" << std::endl;
}
