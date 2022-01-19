/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:07:26 by wollio            #+#    #+#             */
/*   Updated: 2022/01/20 00:11:50 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int numberInt)
{
	this->_fixed = numberInt << _bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float numberFloat)
{
	this->_fixed = (int)roundf(numberFloat * (1 << this->_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed = fixed.getRawBits();
}

Fixed& Fixed::operator= (const Fixed& fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	_fixed = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
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

std::ostream& operator<< (std::ostream& os, const Fixed& fixed)
{
	return (os << fixed.toFloat());
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}