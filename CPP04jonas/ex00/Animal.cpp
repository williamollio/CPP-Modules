/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:28:28 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 10:41:14 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	this->_type = src._type;
}

Animal	&Animal::operator=(const Animal &src)
{
	this->_type = src._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Hi this is the sound of an animal \n";
}

std::string	Animal::getType() const
{
	return (this->_type);
}