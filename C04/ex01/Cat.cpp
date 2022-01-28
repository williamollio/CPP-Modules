/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:37:26 by wollio            #+#    #+#             */
/*   Updated: 2022/01/28 16:44:44 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	brain = new Brain();
	std::cout << "Constructor called for Cat" << std::endl;
}

Cat::~Cat(void)
{
	delete brain;
	std::cout << "Destructor called for Cat" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy constructor called for Cat" << std::endl;
	*this = copy;
}

Cat	&Cat::operator = (const Cat &copy)
{
	this->brain = new Brain();
	this->brain = copy.brain;
	this->type = copy.type;
	std::cout << "Assignation operator called for Cat" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat is doing the sound" << std::endl;
}
