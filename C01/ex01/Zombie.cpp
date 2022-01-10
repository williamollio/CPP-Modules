/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <williamollio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 19:23:34 by wollio            #+#    #+#             */
/*   Updated: 2022/01/03 17:52:53 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::set_name(std::string name)
{
	this->_name = name;
}

void Zombie::announce(void)
{
	std::cout << "Announce : " << this->_name << "." << std::endl;
}

Zombie::Zombie(void)
{
	std::cout << "Constructor called." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor called." << std::endl;
}
