/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:21:59 by wollio            #+#    #+#             */
/*   Updated: 2022/01/20 22:12:48 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void printValues (ClapTrap &x)
{
	cout << "The "<< x.getName() << " has " << x.getHitpoints() << " Hitpoints "
	<< x.getEnergypoints() << " Energy points and " << x.getAttackdamagepoints() << " Attack damage received !" << endl;
}

int main(void)
{
	ClapTrap a ("a");
	ClapTrap b ("b");

	printValues(a);
	printValues(b);

	a.attack(b.getName());
	b.takeDamage(5);
	a.beRepaired(3);

	printValues(a);
	printValues(b);
	return 1;
}