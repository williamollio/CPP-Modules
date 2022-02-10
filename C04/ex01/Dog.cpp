/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:37:21 by wollio            #+#    #+#             */
/*   Updated: 2022/02/10 16:58:33 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	brain = new Brain();
	std::cout << "Constructor called for Dog"<< std::endl;
}

Dog::~Dog(void)
{
	delete brain;
	std::cout << "Destructor called for Dog" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy constructor called for Dog" << std::endl;
	*this = copy;
}

Dog	&Dog::operator = (const Dog &copy)
{
	this->brain = new Brain();
	this->brain = copy.brain;
	this->type = copy.type;
	std::cout << "Assignation operator called for Dog" << std::endl;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog is doing the sound" << std::endl;
}

void Dog::addIdea(std::string idea)
{
	this->brain->addIdea(idea);
}

void Dog::displayIdea()
{
	this->brain->displayIdea();
}