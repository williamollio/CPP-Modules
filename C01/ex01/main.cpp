/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 22:46:51 by wollio            #+#    #+#             */
/*   Updated: 2022/01/13 12:34:45 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *ZombieHorde = NULL;
	ZombieHorde = zombieHorde(5, "horde 1");
	delete [](ZombieHorde);
	return (0);
}
