/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:36:03 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 14:34:22 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure( const Cure &src)
{
	this->_type = src._type;
}

Cure::~Cure() {}

Cure	&Cure::operator=( const Cure &src)
{
	this->_type = src._type;
	return (*this);
}

AMateria*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use( ICharacter &target )
{
	std::cout <<  "* heals " << target.getName() << "'s wounds *" << std::endl;
}