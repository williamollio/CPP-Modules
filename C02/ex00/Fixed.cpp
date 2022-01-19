/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:07:26 by wollio            #+#    #+#             */
/*   Updated: 2022/01/20 00:15:28 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed = fixed.getRawBits();
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixed);
}

Fixed& Fixed::operator= (const Fixed& fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	_fixed = fixed.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}