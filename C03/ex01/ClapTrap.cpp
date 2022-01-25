/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:22:24 by wollio            #+#    #+#             */
/*   Updated: 2022/01/25 16:39:00 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : Hitpoints(10), Energypoints(10), Attackdamage(0)
{
	this->Name = "unnamed";
	std::cout << "Default constructor called for " << Name << " ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(string name) : Name(name), Hitpoints(10), Energypoints(10), Attackdamage(0)
{
	std::cout << "Parameterized constructor called for " << Name << " ClapTrap" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called for " << Name << " ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy): Name(copy.Name)
{
	std::cout << "Copy constructor called ClapTrap" << std::endl;
}

void ClapTrap::attack(string const &target)
{
	cout << Name << " attacks " << target << " causing " << 2 << " points of damage!" << endl;
	this->Energypoints -= 2;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	cout << Name << " takes " << amount << " points of damage!" << endl;
	this->Hitpoints -= amount;
	this->Attackdamage += amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	cout << Name << " got " << amount << " amount of points!" << endl;
	this->Hitpoints += amount;
}

string ClapTrap::getName(void)
{
	return (this->Name);
}

int ClapTrap::getHitpoints(void)
{
	return (this->Hitpoints);
}

int ClapTrap::getEnergypoints(void)
{
	return (this->Energypoints);
}

int ClapTrap::getAttackdamagepoints(void)
{
	return (this->Attackdamage);
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &copy)
{
	std::cout << "Assignation operator called ClapTrap" << std::endl;
	Name = copy.Name;
	return (*this);
}
