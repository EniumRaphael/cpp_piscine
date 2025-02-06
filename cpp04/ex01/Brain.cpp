/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:17:41 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/06 17:56:18 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>

Brain::Brain() {
	for (int i = 0; i < 100; i++) {
		idea[i] = "I'm thinking about the number " + std::to_string(i + 1);
	}
}

Brain::~Brain() {

}
