/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:37:19 by wollio            #+#    #+#             */
/*   Updated: 2022/02/10 17:28:47 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	type = "Animal";
	std::cout << "Constructor called for Animal" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Destructor called for Animal"<< std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy constructor called for Animal" << std::endl;
	*this = copy;
}

Animal	&Animal::operator = (const Animal &copy)
{
	std::cout << "Assignation operator called for Animal" << std::endl;
	this->type = copy.type;
	return (*this);
}

// void Animal::makeSound() const
// {
// 	std::cout << "Animal is doing the sound" << std::endl;
// }

std::string Animal::getType() const
{
	return (type);
}