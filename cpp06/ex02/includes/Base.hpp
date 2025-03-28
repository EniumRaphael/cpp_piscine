/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 12:07:18 by rparodi           #+#    #+#             */
/*   Updated: 2025/03/28 16:11:50 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <new>
#include <typeinfo>

class Base {
	public:
		virtual ~Base() {
			std::cout << "Base destructor" << std::endl;
		};
};
