/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:07:26 by wollio            #+#    #+#             */
/*   Updated: 2022/01/17 12:42:30 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_fixed = 0;
	cout << "Default constructor called" << endl;
}

Fixed::~Fixed(void)
{
	cout << "Destructor called" << endl;
}