/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:13:57 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 14:33:10 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria( const AMateria &src )
{
	this->_type = src._type;
}

AMateria::AMateria( std::string const & type) : _type(type) {}

AMateria::~AMateria() {}

AMateria	&AMateria::operator=( const AMateria &src)
{
	this->_type = src._type;
	return (*this);
}

std::string const &	AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}