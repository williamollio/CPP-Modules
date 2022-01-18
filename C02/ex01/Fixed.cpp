/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:07:26 by wollio            #+#    #+#             */
/*   Updated: 2022/01/18 17:29:55 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_fixed = 0;
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const int numberInt)
{
	this->_fixed = numberInt << _bits;
	cout << "Int constructor called" << endl;
}

Fixed::Fixed(const float numberFloat)
{
	this->_fixed = (int)roundf(numberFloat * (1 << this->_bits));
	cout << "Float constructor called" << endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	cout << "Copy constructor called" << endl;
	this->_fixed = fixed.getRawBits();
}

Fixed& Fixed::operator= (const Fixed& fixed)
{
	cout << "Assignation operator called" << endl;
	_fixed = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called" << endl;
	return (_fixed);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)_fixed / (float)(1 << _bits));
}

int Fixed::toInt(void) const
{
	return (_fixed >> _bits);
}

ostream& operator<< (ostream& os, const Fixed& fixed)
{
	return (os << fixed.toFloat());
}

Fixed::~Fixed(void)
{
	cout << "Destructor called" << endl;
}