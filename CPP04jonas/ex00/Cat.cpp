/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:40:41 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 10:41:43 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat( const Cat & src )
{
	this->_type = src._type;
}

Cat	&Cat::operator=( const Cat & src )
{
	this->_type = src._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miau" << std::endl;
}
