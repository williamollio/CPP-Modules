/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:07:28 by wollio            #+#    #+#             */
/*   Updated: 2022/01/20 00:08:29 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed {

	private:
		static const int _bits = 8;
		int _fixed;

	public:
		Fixed(void);
		Fixed(const int numberInt);
		Fixed(const float numberFloat);
		~Fixed(void);
		Fixed (const Fixed &fixed);
		int getRawBits (void) const;
		void setRawBits (int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		Fixed& operator= (const Fixed& fixed);
		bool operator== (const Fixed& a);
		bool operator!= (const Fixed& a);
		bool operator> (const Fixed& a);
		bool operator>= (const Fixed& a);
		bool operator< (const Fixed& a);
		bool operator<= (const Fixed& a);

		Fixed operator+ (const Fixed& fixed);
		Fixed operator- (const Fixed& fixed);
		Fixed operator* (const Fixed& fixed);
		Fixed operator/ (const Fixed& fixed);

		Fixed operator++ (); // pre-increment overload
		Fixed operator++ (int); // post-increment overload
		Fixed operator-- (); // pre-increment overload
		Fixed operator-- (int); // post-increment overload

		static Fixed const &min( const Fixed &a, const Fixed &b ); // overload
		static Fixed const	&max( const Fixed  &a, const Fixed &b ); // overload
		static Fixed &min( Fixed &a, Fixed &b );
		static Fixed &max( Fixed &a, Fixed &b );
};

std::ostream& operator<< (std::ostream& os, const Fixed& fixed);
