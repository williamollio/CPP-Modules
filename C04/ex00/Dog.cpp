/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:37:21 by wollio            #+#    #+#             */
/*   Updated: 2022/01/27 10:56:04 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	std::cout << "Constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Destructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Dog	&Dog::operator = (const Dog &copy)
{
	std::cout << "Assignation operator called" << std::endl;
}


// std::string Dog::getType()
// {
// 	return (this->type);
// }