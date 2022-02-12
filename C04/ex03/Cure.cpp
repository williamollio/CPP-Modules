/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:35:51 by wollio            #+#    #+#             */
/*   Updated: 2022/02/11 20:19:52 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	std::cout << "Constructor called" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Destructor called" << std::endl;
}

Cure::Cure(const Cure &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Cure	&Cure::operator = (const Cure &copy)
{
	std::cout << "Assignation operator called" << std::endl;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria *Cure::clone()
{
	Cure *clone = new Cure(*this);
	return (clone);
}