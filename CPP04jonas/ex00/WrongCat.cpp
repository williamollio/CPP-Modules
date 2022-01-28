/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:40:41 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/23 16:42:53 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &src )
{
	this->_type = src._type;
}

WrongCat	&WrongCat::operator=( const WrongCat &src )
{
	this->_type = src._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Hi this is the sound of WrongCat" << std::endl;
}
