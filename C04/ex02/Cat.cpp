/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:37:26 by wollio            #+#    #+#             */
/*   Updated: 2022/02/10 16:53:15 by wiliamollio      ###   ########.fr       */
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
	delete this->brain;
	std::cout << "Destructor called for Cat" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy constructor called for Cat" << std::endl;
	this->brain = new Brain();
	*this = copy;
}

Cat	&Cat::operator = (const Cat &copy)
{
	*this->brain = *copy.brain;
	this->type = copy.type;
	std::cout << "Assignation operator called for Cat" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat is doing the sound" << std::endl;
}

void Cat::addIdea(std::string idea)
{
	this->brain->addIdea(idea);
}

void Cat::displayIdea()
{
	this->brain->displayIdea();
}