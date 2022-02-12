/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:50:25 by wollio            #+#    #+#             */
/*   Updated: 2022/02/11 19:53:54 by wiliamollio      ###   ########.fr       */
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
	if (!m)
	{
		std::cout << "No materia to equip" << std::endl;
		return;
	}
	int i = 0;
	while (i < 3 && materia[i])
		i++;
	if (materia[i])
		std::cout << "Inventory full" << std::endl;
	else
		materia[i] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Index doesn't exist" << std::endl;
		return;
	}
	if (materia[idx])
		materia[idx] = NULL;
	else
		std::cout << "Nothing in here to unequip" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (materia[idx])
		materia[idx]->use(target);
}