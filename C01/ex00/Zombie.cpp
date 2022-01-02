/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <williamollio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 19:23:34 by wollio            #+#    #+#             */
/*   Updated: 2022/01/02 11:26:22 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << "Announce : " << this->_name << "." << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Constructor for " << this->_name << " called." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor for " << this->_name << " called." << std::endl;
}
