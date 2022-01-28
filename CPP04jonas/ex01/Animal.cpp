/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:28:28 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 10:48:48 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << "Animal Constructor called for " << _type << std::endl;
}

Animal::Animal(const Animal & src)
{
	this->_type = src._type;
	std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called for " << _type << std::endl;
}

Animal	&Animal::operator=(const Animal & src)
{
	this->_type = src._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Hi this is the sound of an animal" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}