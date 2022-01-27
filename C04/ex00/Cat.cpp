/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:37:26 by wollio            #+#    #+#             */
/*   Updated: 2022/01/27 10:56:07 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	std::cout << "Constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Destructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Cat	&Cat::operator = (const Cat &copy)
{
	std::cout << "Assignation operator called" << std::endl;
}

// std::string Cat::getType()
// {
// 	return (this->type);
// }