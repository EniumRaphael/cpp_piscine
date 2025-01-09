/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:30:23 by rparodi           #+#    #+#             */
/*   Updated: 2024/12/27 14:13:47 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
	#define FIXED_HPP
	
	#include <iostream>
	
	class Fixed {
		public:
			Fixed();
			Fixed(const Fixed &copy);
			Fixed(const int &integer);
			Fixed(const float &floating);
			~Fixed();
			int getRawBits() const;
			void setRawBits(const int value);
			int toInt() const;
			float toFloat() const;
			Fixed & operator = (const Fixed &value);
			Fixed & operator > (const Fixed &value);
			Fixed & operator < (const Fixed &value);
			Fixed & operator >= (const Fixed &value);
			Fixed & operator <= (const Fixed &value);
			Fixed & operator == (const Fixed &value);
			Fixed & operator != (const Fixed &value);
			Fixed & operator + (const Fixed &value);
			Fixed & operator - (const Fixed &value);
			Fixed & operator / (const Fixed &value);
			Fixed & operator * (const Fixed &value);
			Fixed operator ++ ();
			Fixed operator -- ();
			Fixed & operator ++ ();
			Fixed & operator -- ();
		private:
			int	_integer_value;
			float _floating_value;
			int _fixed_value;
			static const int _fractionnal = 8;
	};

std::ostream & operator << (std::ostream& output, const Fixed &value);
#endif
