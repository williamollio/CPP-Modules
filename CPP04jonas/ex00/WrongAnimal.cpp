/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:28:28 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 10:42:27 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &src )
{
	this->_type = src._type;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &src )
{
	this->_type = src._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Hi this is the sound of WrongAnimal" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}