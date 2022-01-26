/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:31:02 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/01/25 19:58:25 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	Name = "unnamed";
	Hitpoints = 100;
	Energypoints = 100;
	Attackdamage = 30;
	std::cout << "Default constructor called FragTrap" << std::endl;
}

FragTrap::FragTrap(string name)
{
	Name = name;
	Hitpoints = 100;
	Energypoints = 100;
	Attackdamage = 30;
	std::cout << "Parameterized constructor called for " << Name << " FragTrap" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called for " << Name << " FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "Copy constructor called for " << Name << " FrapTrag" << std::endl;
	*this = copy;
}

FragTrap	&FragTrap::operator = (const FragTrap &copy)
{
	std::cout << "Assignation operator called for " << Name << " FrapTrag" << std::endl;
	Name = copy.Name;
	Hitpoints = copy.Hitpoints;
	Energypoints = copy.Energypoints;
	Attackdamage = copy.Attackdamage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << Name << " high gives requested" << std::endl;
}