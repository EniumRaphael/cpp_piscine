/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:30:23 by rparodi           #+#    #+#             */
/*   Updated: 2024/12/23 14:32:05 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
	#define FIXED_HPP
	
	#include <iostream>
	
	class Fixed {
		public:
			Fixed();
			Fixed(const Fixed &copy);
			~Fixed();
			int getRawBits();
			void setRawBits(const int value);
			Fixed & operator = (const Fixed &value);
		private:
			int _fixed_value;
			static const int _fractionnal = 8;
	};

#endif
