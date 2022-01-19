/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:07:26 by wollio            #+#    #+#             */
/*   Updated: 2022/01/20 00:08:22 by wiliamollio      ###   ########.fr       */
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

float Fixed::toFloat(void) const { return ((float)_fixed / (float)(1 << _bits)); }
int Fixed::toInt(void) const { return (_fixed >> _bits); }

std::ostream& operator<< (std::ostream& os, const Fixed& fixed) { return (os << fixed.toFloat()); }

bool Fixed::operator!= (const Fixed& a) { return (this->_fixed != a.getRawBits()); }
bool Fixed::operator== (const Fixed& a) { return (this->_fixed == a.getRawBits()); }
bool Fixed::operator> (const Fixed& a) { return (this->_fixed > a.getRawBits()); }
bool Fixed::operator>= (const Fixed& a) { return (this->_fixed >= a.getRawBits()); }
bool Fixed::operator< (const Fixed& a) { return (this->_fixed < a.getRawBits()); }
bool Fixed::operator<= (const Fixed& a) { return (this->_fixed <= a.getRawBits()); }

Fixed Fixed::operator+ (const Fixed& fixed)
{
	Fixed rt;
	int nb = this->_fixed + fixed.getRawBits();
	rt.setRawBits(nb);
	return (rt);
}

Fixed Fixed::operator- (const Fixed& fixed)
{
	Fixed rt;
	int nb = this->_fixed - fixed.getRawBits();
	rt.setRawBits(nb);
	return (rt);
}

Fixed Fixed::operator* (const Fixed& fixed)
{
	Fixed rt;
	int nb = (((long)this->_fixed * (long)fixed.getRawBits()) >> _bits);
	rt.setRawBits(nb);
	rt.toFloat();
	return (rt);
}

Fixed Fixed::operator/ (const Fixed& fixed)
{
	Fixed rt;
	int nb = (((long)this->_fixed << _bits) / fixed.getRawBits());
	rt.setRawBits(nb);
	return (rt);
}

Fixed Fixed::operator++ ()
{
	Fixed rt;
	_fixed++;
	rt._fixed = _fixed;
	return (rt);
}

Fixed Fixed::operator++ (int)
{
	Fixed rt;
	rt._fixed = _fixed++;
	return (rt);
}

Fixed Fixed::operator-- ()
{
	Fixed rt;
	_fixed--;
	rt._fixed = _fixed;
	return (rt);
}

Fixed Fixed::operator-- (int)
{
	Fixed rt;
	rt._fixed = _fixed--;
	return (rt);
}

Fixed const &Fixed::min( const Fixed &a, const Fixed &b )
{
	if ((Fixed)a < (Fixed)b)
		return a;
	return b;
}

Fixed &Fixed::min( Fixed &a, Fixed &b )
{
	if ((Fixed)a < (Fixed)b)
		return a;
	return b;
}

Fixed const &Fixed::max( const Fixed &a, const Fixed &b )
{

	if ((Fixed)a > (Fixed)b)
		return a;
	return b;
}

Fixed &Fixed::max( Fixed &a, Fixed &b )
{
	if ((Fixed)a > (Fixed)b)
		return a;
	return b;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}