/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <williamollio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 21:06:19 by wollio            #+#    #+#             */
/*   Updated: 2022/01/03 17:53:07 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// the trick in this exercise is to modify the constructor because of the use of the new operator and the creation of an array of instances.
// We actually can't pass any parameters while initializating

using namespace std;
Zombie *zombieHorde(int N, string name)
{
	Zombie *zombiehorde = new Zombie[N];
	int i = 0;
	name = "Zombie ";

	while (i < N)
	{
		string name1 = name;
		name1.replace(name.length(), 1, to_string(i+1));
		zombiehorde[i].set_name(name1);
		zombiehorde[i].announce();
		i++;
	}
	return (zombiehorde);
}
