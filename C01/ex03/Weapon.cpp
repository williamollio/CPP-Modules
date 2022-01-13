/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:08:03 by wollio            #+#    #+#             */
/*   Updated: 2022/01/13 12:41:48 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	this->_name = str;
}

void Weapon::setType(std::string str)
{
	this->_name = str;
	return;
}

const std::string &Weapon::getType(void)
{
	return (this->_name);
}

Weapon::~Weapon(void)
{
}
