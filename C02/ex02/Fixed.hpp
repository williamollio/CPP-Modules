/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:07:28 by wollio            #+#    #+#             */
/*   Updated: 2022/01/18 18:55:20 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

using namespace std;

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
};

ostream& operator<< (ostream& os, const Fixed& fixed);
