/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <williamollio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:07:39 by wollio            #+#    #+#             */
/*   Updated: 2022/01/03 22:32:31 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(string str, Weapon &weapon) : _name(str), _weapon(weapon)
{
	//this->_name = str;
	//this->_weapon = weapon;
	cout << "Constructor called " << this->_name << endl;
}

HumanA::~HumanA(void)
{
	cout << "Destructor called "<< this->_name << endl;
}

void HumanA::attack(void)
{
	cout << this->_name << " attacks with his " << this->_weapon.getType() << endl;
}
