/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:17:41 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/06 23:28:28 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>
#include <string>

Brain::Brain() {
	for (int i = 0; i < 100; i++) {
		std::ostringstream oss;
		oss << "I'm thinking about the number " << (i + 1);
		idea[i] = oss.str();
	}
}

Brain::~Brain() {

}
