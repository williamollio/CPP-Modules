/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:07:26 by wollio            #+#    #+#             */
/*   Updated: 2022/01/18 13:01:12 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_fixed = 0;
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	cout << "Copy constructor called" << endl;
	this->_fixed = fixed.getRawBits();
}

int Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called" << endl;
	return (_fixed);
}

Fixed& Fixed::operator= (const Fixed& fixed)
{
	cout << "Assignation operator called" << endl;
	_fixed = fixed.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
}

Fixed::~Fixed(void)
{
	cout << "Destructor called" << endl;
}