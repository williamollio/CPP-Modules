/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 21:06:19 by wollio            #+#    #+#             */
/*   Updated: 2022/01/13 12:35:06 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombiehorde = new Zombie[N];
	int i = 0;
	std::string numberZombie = "Zombie ";
	std::string nameHorde = " of the ";
	nameHorde += name;

	while (i < N)
	{
		std::string name1 = numberZombie;
		name1.replace(name.length(), 1, std::to_string(i+1));
		name1 += nameHorde;
		zombiehorde[i].set_name(name1);
		zombiehorde[i].announce();
		i++;
	}
	return (zombiehorde);
}
