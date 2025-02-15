/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:30:23 by rparodi           #+#    #+#             */
/*   Updated: 2025/02/15 19:14:59 by rparodi          ###   ########.fr       */
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

		Fixed & operator = (const Fixed &value);

		Fixed operator * (const Fixed &value) const;
		Fixed operator + (const Fixed &value) const;
		Fixed operator - (const Fixed &value) const;
		Fixed operator / (const Fixed &value) const;

		bool operator == (const Fixed &value) const;
		bool operator != (const Fixed &value) const;
		bool operator > (const Fixed &value) const;
		bool operator < (const Fixed &value) const;
		bool operator <= (const Fixed &value) const;
		bool operator >= (const Fixed &value) const;

		Fixed & operator ++ ();
		Fixed operator ++ (int);
		Fixed & operator -- ();
		Fixed operator -- (int);
		int toInt() const;
		float toFloat() const;

		static Fixed & min(Fixed &a, Fixed &b);
		static Fixed & max(Fixed &a, Fixed &b);
		static const Fixed & min(const Fixed &a, const Fixed &b);
		static const Fixed & max(const Fixed &a, const Fixed &b);

	private:
		int _fixed_value;
		static const int _fractionnal = 8;
};

std::ostream & operator << (std::ostream& output, const Fixed &value);

// Color (Just aesthetic)

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

#define CLR_LIGHT_BLACK "\033[0;90m"
#define CLR_LIGHT_RED "\033[0;91m"
#define CLR_LIGHT_GREEN "\033[0;92m"
#define CLR_LIGHT_YELLOW "\033[0;93m"
#define CLR_LIGHT_BLUE "\033[0;94m"
#define CLR_LIGHT_MAGENTA "\033[0;95m"
#define CLR_LIGHT_CYAN "\033[0;96m"
#define CLR_LIGHT_WHITE "\033[0;97m"

#define CLR_BOLD_BLACK "\033[1;30m"
#define CLR_BOLD_RED "\033[1;31m"
#define CLR_BOLD_GREEN "\033[1;32m"
#define CLR_BOLD_YELLOW "\033[1;33m"
#define CLR_BOLD_BLUE "\033[1;34m"
#define CLR_BOLD_MAGENTA "\033[1;35m"
#define CLR_BOLD_CYAN "\033[1;36m"
#define CLR_BOLD_WHITE "\033[1;37m"

#endif
