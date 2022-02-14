/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:35:51 by wollio            #+#    #+#             */
/*   Updated: 2022/02/14 18:51:13 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	type = "cure";
	/* std::cout << "Constructor called" << std::endl; */
}

Cure::~Cure(void)
{
	/* std::cout << "Destructor called" << std::endl; */
}

Cure::Cure(const Cure &copy)
{
	/* std::cout << "Copy constructor called" << std::endl; */
	*this = copy;
}

Cure	&Cure::operator = (const Cure &copy)
{
	this->type = copy.type;
	/* std::cout << "Assignation operator called" << std::endl; */
	return (*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria *Cure::clone() const
{
	Cure *clone = new Cure(*this);
	return (clone);
}