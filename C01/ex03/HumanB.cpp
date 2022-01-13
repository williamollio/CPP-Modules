/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:07:42 by wollio            #+#    #+#             */
/*   Updated: 2022/01/13 13:04:04 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return;
}

void HumanB::attack(void)
{
	std::cout << this->_name << " attacks";
	if (this->_weapon != NULL)
		std::cout << " with his " << this->_weapon->getType() << std::endl;
	else
		std::cout << std::endl;
	return;
}

HumanB::~HumanB(void)
{
}
