/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:37:19 by wollio            #+#    #+#             */
/*   Updated: 2022/01/27 12:47:25 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("")
{
	std::cout << "Constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Destructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Animal	&Animal::operator = (const Animal &copy)
{
	this->type = copy.type;
	std::cout << "Assignation operator called" << std::endl;
}

void Animal::makeSound()
{
	std::cout << "" << std::endl;
}

std::string Animal::getType()
{
	return (this->type);
}