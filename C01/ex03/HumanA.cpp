/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <williamollio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:07:39 by wollio            #+#    #+#             */
/*   Updated: 2022/01/05 16:20:15 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(string str, Weapon &weapon) : _name(str), _weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

void HumanA::attack(void)
{
	cout << this->_name << " attacks with his " << this->_weapon.getType() << endl;
}
