/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:19:59 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 16:07:56 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _inventory() {}

MateriaSource::MateriaSource( MateriaSource const & src ) {

	*this = src;
}

MateriaSource::~MateriaSource() {

	for (int i = 0; i < 4; i++) {
		delete this->_inventory[i];
	}
}

MateriaSource	&MateriaSource::operator=( MateriaSource const & src ) {

	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = src._inventory[i];
	}
	return *this;
}

void	MateriaSource::learnMateria( AMateria* m ) {

	if (!m) return ;

	for (int i = 0; i < 4; i++) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria( std::string const & type ) {

	for (int i = 0; i < 4; i++)  {
		if (this->_inventory[i] && this->_inventory[i]->getType() == type) {
			return this->_inventory[i]->clone();
		}
	}

	return nullptr;
}