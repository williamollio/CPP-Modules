/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:49:18 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/01/25 20:52:30 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "Default constructor called DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(string Name)
{
	name = Name;
	ClapTrap::Name = Name + "_clap_name";
	Hitpoints = FragTrap::Hitpoints;
	Energypoints = ScavTrap::Energypoints;
	Attackdamage = FragTrap::Attackdamage;
	std::cout << "Parameterized constructor called DiamondTrap" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor called for " << Name << " DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "Copy constructor called for " << Name << " DiamondTrap" << std::endl;
	*this = copy;
}

DiamondTrap	&DiamondTrap::operator = (const DiamondTrap &copy)
{
	std::cout << "Assignation operator called for " << Name << " DiamondTrap" << std::endl;
	Name = copy.Name;
	ClapTrap::Name = copy.Name + "_clap_name";
	Hitpoints = copy.Hitpoints;
	Attackdamage = copy.Attackdamage;
	Energypoints = copy.Energypoints;
	return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	cout << "whoAmI function | DiamondTrap name : " << Name << endl
	<< " whoAmI function |ClapTrap name : " << ClapTrap::Name << endl;
}