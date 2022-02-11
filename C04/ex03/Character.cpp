/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:50:25 by wollio            #+#    #+#             */
/*   Updated: 2022/02/11 16:40:54 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("unamed")
{
	std::cout << "Default constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Constructor called for " << _name << std::endl;
}

Character::~Character(void)
{
	std::cout << "Destructor called" << std::endl;
}

Character::Character(const Character &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Character	&Character::operator = (const Character &copy)
{
	std::cout << "Assignation operator called" << std::endl;
}

std::string const &Character::getName()
{
	return (_name);
}

void Character::equip(AMateria *m)
{
	int i = 0;
	while (i < 4 && materia[i])
		i++;
	materia[i] = m;
}

void Character::unequip(int idx)
{
	if (materia[idx])
		materia[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (materia[idx])
		materia[idx]->use(target);
}