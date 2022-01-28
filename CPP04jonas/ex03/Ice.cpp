/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:58:52 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 14:52:14 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice( const Ice &src )
{
	*this = src;
}

Ice::~Ice() {}

Ice	&Ice::operator=( const Ice &src )
{
	this->_type = src._type;
	return (*this);
}

AMateria*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use( ICharacter &target)
{
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}