/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:07:26 by wollio            #+#    #+#             */
/*   Updated: 2022/01/19 15:54:21 by wollio           ###   ########.fr       */
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

float Fixed::toFloat(void) const { return ((float)_fixed / (float)(1 << _bits)); }
int Fixed::toInt(void) const { return (_fixed >> _bits); }

ostream& operator<< (ostream& os, const Fixed& fixed) { return (os << fixed.toFloat()); }

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
	cout << "Destructor called" << endl;
}