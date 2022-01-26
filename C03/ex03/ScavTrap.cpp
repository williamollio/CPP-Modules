/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:11:49 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/01/25 20:53:20 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	Name = "unnamed";
	Hitpoints = 100;
	Energypoints = 50;
	Attackdamage = 20;
	std::cout << "Default constructor called ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(string name)
{
	Name = name ;
	Hitpoints = 100;
	Energypoints = 50;
	Attackdamage = 20;
	std::cout << "Parameterized constructor called for " << Name << " ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called for " << Name << " ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "Copy constructor called for " << Name << " ScavTrap" << std::endl;
	*this = copy;
}

ScavTrap	&ScavTrap::operator = (const ScavTrap &copy)
{
	Name = copy.Name;
	Hitpoints = copy.Hitpoints;
	Attackdamage = copy.Attackdamage;
	Energypoints = copy.Energypoints;
	std::cout << "Assignation operator called for " << Name << " ScavTrap" << std::endl;
	return (*this);
}

void ScavTrap::guardGuate()
{
	std::cout << Name << " ScavTrap has enterred in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(string const &target)
{
	cout << Name << " ScavTrap" << " attacks " << target << " causing " << 2 << " points of damage!" << endl;
	this->Energypoints -= 2;
}