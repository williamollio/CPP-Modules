/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:37:26 by wollio            #+#    #+#             */
/*   Updated: 2022/01/27 16:52:47 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	std::cout << "Constructor called for " << type << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Destructor called for " << type << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Cat	&Cat::operator = (const Cat &copy)
{
	type = copy.type;
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat is doing the sound" << std::endl;
}
