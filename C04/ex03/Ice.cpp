/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:36:24 by wollio            #+#    #+#             */
/*   Updated: 2022/02/11 20:25:45 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

AMateria* Ice::clone()
{
	Ice *clone = new Ice(*this);
	return (clone);
}

Ice::Ice(void)
{
	std::cout << "Constructor called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Destructor called" << std::endl;
}

Ice::Ice(const Ice &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Ice	&Ice::operator = (const Ice &copy)
{
	std::cout << "Assignation operator called" << std::endl;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}