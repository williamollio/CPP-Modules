/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <williamollio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 19:23:34 by wollio            #+#    #+#             */
/*   Updated: 2022/01/01 22:45:16 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	std::cout << "I am " << name << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor called." << std::endl;
}
