/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:28:28 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 10:48:48 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->_type = "AAnimal";
	std::cout << "AAnimal Constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal & src)
{
	this->_type = src._type;
	std::cout << "AAnimal Copy Constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal & src)
{
	this->_type = src._type;
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}