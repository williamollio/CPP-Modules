/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <williamollio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:08:03 by wollio            #+#    #+#             */
/*   Updated: 2022/01/03 22:06:36 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string str)
{
	this->_name = str;
	cout << "Constructor called Weapon" << endl;
}

void Weapon::setType(string str)
{
	this->_name = str;
	return;
}

const string &Weapon::getType(void)
{
	return (this->_name);
}

Weapon::~Weapon(void)
{
	cout << "Destructor called Weapon" << endl;
}
