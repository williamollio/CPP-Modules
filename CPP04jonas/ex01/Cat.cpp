/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:40:41 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 13:11:58 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat Constructor called for " << _type << std::endl;
}

Cat::Cat(const Cat & src)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	this->_brain = new Brain();
	*this = src;
}

Cat::~Cat()
{
	delete(this->_brain);
	std::cout << "Cat Desctructor called for " << _type << std::endl;
}

Cat	&Cat::operator=(const Cat & src)
{
	this->_type = src._type;
	*this->_brain = *src._brain;

	return (*this);
}

void	Cat::addidea(std::string idea)
{
	this->_brain->addidea(idea);
}

void	Cat::showideas() const
{
	this->_brain->showideas();
}