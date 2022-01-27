/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:03:50 by wollio            #+#    #+#             */
/*   Updated: 2022/01/27 17:14:31 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type ("WrongAnimal")
{
	std::cout << "Constructor called for " << type << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor called for " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

WrongAnimal	&WrongAnimal::operator = (const WrongAnimal &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	type = copy.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal is doing the sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}