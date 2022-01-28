/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:45:58 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 10:42:09 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog( const Dog &src )
{
	this->_type = src._type;
}

Dog	&Dog::operator=( const Dog & src)
{
	this->_type = src._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "WAU" << std::endl;
}