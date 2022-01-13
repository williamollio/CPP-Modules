/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 22:46:51 by wollio            #+#    #+#             */
/*   Updated: 2022/01/13 11:45:55 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie1("zombie1");
	Zombie *zombie2 = newZombie("zombie2");
	if (!zombie2)
	{
		std::cout << "Allocation failed !" << std::endl;
		return (1);
	}
	randomChump("zombie3");
	delete zombie2;
	return (0);
}
