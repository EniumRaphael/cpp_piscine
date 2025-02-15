/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 14:41:58 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/15 18:57:30 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <ostream>

int main( void ) {
	Fixed a;
	Fixed const b( -42 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 42 );

	std::cout << CLR_YELLOW << "\t[ Simple " << CLR_LIGHT_BLACK << "( overload '<<' )" << CLR_YELLOW << " ]" << CLR_RESET << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << std::endl;

	std::cout << CLR_YELLOW << "\t[ Integer " << CLR_LIGHT_BLACK << "( method toInt() )" << CLR_YELLOW << " ]" << CLR_RESET << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << std::endl;

	std::cout << CLR_YELLOW << "\t[ Floating " << CLR_LIGHT_BLACK << "( method toFloat() )" << CLR_YELLOW << " ]" << CLR_RESET << std::endl;
	std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	std::cout << "b is " << b.toFloat() << " as float" << std::endl;
	std::cout << "c is " << c.toFloat() << " as float" << std::endl;
	std::cout << "d is " << d.toFloat() << " as float" << std::endl;
	std::cout << std::endl;

	std::cout << CLR_YELLOW << "\t[ Bits " << CLR_LIGHT_BLACK << "( method getRawBits() )" << CLR_YELLOW << " ]" << CLR_RESET << std::endl;
	std::cout << "a is " << a.getRawBits() << " as raw" << std::endl;
	std::cout << "b is " << b.getRawBits() << " as raw" << std::endl;
	std::cout << "c is " << c.getRawBits() << " as raw" << std::endl;
	std::cout << "d is " << d.getRawBits() << " as raw" << std::endl;
	std::cout << std::endl;

	std::cout << CLR_YELLOW << "\t[ Operator + " << CLR_LIGHT_BLACK << "( Overload '+' )" << CLR_YELLOW << " ]" << CLR_RESET << std::endl;
	std::cout << "a (" << a.toFloat() << ") + b (" << b.toFloat() << ") is " << (a + b).toFloat() << std::endl;
	std::cout << "c (" << c.toFloat() << ") + d (" << d.toFloat() << ") is " << (c + d).toFloat() << std::endl;
	std::cout << std::endl;

	std::cout << CLR_YELLOW << "\t[ Operator - " << CLR_LIGHT_BLACK << "( Overload '-' )" << CLR_YELLOW << " ]" << CLR_RESET << std::endl;
	std::cout << "a (" << a.toFloat() << ") - b (" << b.toFloat() << ") is " << (a - b).toFloat() << std::endl;
	std::cout << "c (" << c.toFloat() << ") - d (" << d.toFloat() << ") is " << (c - d).toFloat() << std::endl;
	std::cout << std::endl;

	std::cout << CLR_YELLOW << "\t[ Operator * " << CLR_LIGHT_BLACK << "( Overload '*' )" << CLR_YELLOW << " ]" << CLR_RESET << std::endl;
	std::cout << "a (" << a.toFloat() << ") * b (" << b.toFloat() << ") is " << (a * b).toFloat() << std::endl;
	std::cout << "c (" << c.toFloat() << ") * d (" << d.toFloat() << ") is " << (c * d).toFloat() << std::endl;
	std::cout << std::endl;

	std::cout << CLR_YELLOW << "\t[ Operator / " << CLR_LIGHT_BLACK << "( Overload '/' )" << CLR_YELLOW << " ]" << CLR_RESET << std::endl;
	std::cout << "a (" << a.toFloat() << ") / b (" << b.toFloat() << ") is " << (a / b).toFloat() << std::endl;
	std::cout << "c (" << c.toFloat() << ") / d (" << d.toFloat() << ") is " << (c / d).toFloat() << std::endl;
	std::cout << std::endl;

	std::cout << CLR_YELLOW << "\t[ Operator == " << CLR_LIGHT_BLACK << "( Overload '==' )" << CLR_YELLOW << " ]" << CLR_RESET << std::endl;
	std::cout << "a (" << a.toFloat() << ") == b (" << b.toFloat() << ") is " << (a == b ? "true" : "false") << std::endl;
	std::cout << "c (" << c.toFloat() << ") == d (" << d.toFloat() << ") is " << (c == d ? "true" : "false") << std::endl;
	std::cout << std::endl;

	std::cout << CLR_YELLOW << "\t[ Operator != " << CLR_LIGHT_BLACK << "( Overload '!=' )" << CLR_YELLOW << " ]" << CLR_RESET << std::endl;
	std::cout << "a (" << a.toFloat() << ") != b (" << b.toFloat() << ") is " << (a != b ? "true" : "false") << std::endl;
	std::cout << "c (" << c.toFloat() << ") != d (" << d.toFloat() << ") is " << (c != d ? "true" : "false") << std::endl;
	std::cout << std::endl;

	std::cout << CLR_YELLOW << "\t[ Operator < " << CLR_LIGHT_BLACK << "( Overload '<' )" << CLR_YELLOW << " ]" << CLR_RESET << std::endl;
	std::cout << "a (" << a.toFloat() << ") < b (" << b.toFloat() << ") is " << (a<b ? "true" : "false") << std::endl;
	std::cout << "c (" << c.toFloat() << ") < d (" << d.toFloat() << ") is " << (c<d ? "true" : "false") << std::endl;
	std::cout << std::endl;

	std::cout << CLR_YELLOW << "\t[ Operator > " << CLR_LIGHT_BLACK << "( Overload '>' )" << CLR_YELLOW << " ]" << CLR_RESET << std::endl;
	std::cout << "a (" << a.toFloat() << ") > b (" << b.toFloat() << ") is " << (a>b ? "true" : "false") << std::endl;
	std::cout << "c (" << c.toFloat() << ") > d (" << d.toFloat() << ") is " << (c>d ? "true" : "false") << std::endl;
	std::cout << std::endl;

	std::cout << CLR_YELLOW << "\t[ Operator >= " << CLR_LIGHT_BLACK << "( Overload '>=' )" << CLR_YELLOW << " ]" << CLR_RESET << std::endl;
	std::cout << "a (" << a.toFloat() << ") >= b (" << b.toFloat() << ") is " << (a>=b ? "true" : "false") << std::endl;
	std::cout << "c (" << c.toFloat() << ") >= d (" << d.toFloat() << ") is " << (c>=d ? "true" : "false") << std::endl;
	std::cout << std::endl;

	std::cout << CLR_YELLOW << "\t[ Operator <= " << CLR_LIGHT_BLACK << "( Overload '<=' )" << CLR_YELLOW << " ]" << CLR_RESET << std::endl;
	std::cout << "a (" << a.toFloat() << ") <= b (" << b.toFloat() << ") is " << (a<=b ? "true" : "false") << std::endl;
	std::cout << "c (" << c.toFloat() << ") <= d (" << d.toFloat() << ") is " << (c<=d ? "true" : "false") << std::endl;
	std::cout << std::endl;

	std::cout << CLR_YELLOW << "\t[ Destructor " << CLR_LIGHT_BLACK << "( ~Fixed() )" << CLR_YELLOW << " ]" << CLR_RESET << std::endl;
}
