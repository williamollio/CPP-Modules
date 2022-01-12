/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:07:42 by wollio            #+#    #+#             */
/*   Updated: 2022/01/12 16:26:40 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(string name)
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
	cout << this->_name << " attacks";
	if (this->_weapon != NULL)
		cout << " with his " << this->_weapon->getType() << endl;
	else
		cout << endl;
	return;
}

HumanB::~HumanB(void)
{
}
