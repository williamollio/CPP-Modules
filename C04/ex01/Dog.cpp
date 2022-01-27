/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:37:21 by wollio            #+#    #+#             */
/*   Updated: 2022/01/27 16:52:41 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	std::cout << "Constructor called for " << type << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Destructor called for " << type << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Dog	&Dog::operator = (const Dog &copy)
{
	type = copy.type;
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog is doing the sound" << std::endl;
}