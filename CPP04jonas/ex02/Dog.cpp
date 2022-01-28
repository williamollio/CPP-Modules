/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:45:58 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 13:22:22 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(Dog & src)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	this->_brain = new Brain();
	*this = src;
}

Dog::~Dog()
{
	delete(this->_brain);
	std::cout << "Dog Destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &src)
{
	std::cout << "Dog assignment operator called" << std::endl;
	this->_type = src._type;
	*this->_brain = *src._brain;

	return (*this);
}

void	Dog::addidea(std::string idea)
{
	this->_brain->addidea(idea);
}

void	Dog::showideas() const
{
	this->_brain->showideas();
}

void	Dog::makeSound( void ) const {

	std::cout << "Wau" << std::endl;
}