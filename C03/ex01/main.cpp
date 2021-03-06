/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:21:59 by wollio            #+#    #+#             */
/*   Updated: 2022/01/25 20:04:23 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void printValues (ScavTrap &x)
{
	cout << "The "<< x.getName() << " has " << x.getHitpoints() << " Hitpoints "
	<< x.getEnergypoints() << " Energy points and " << x.getAttackdamagepoints() << " Attack damage received !" << endl;
}

int main(void)
{
	ScavTrap A ("A");
	//ScavTrap B ("B");
	ScavTrap C = A;
	//ScavTrap D = B;

	A.beRepaired(3);
	printValues(C);
	//printValues(D);

	// A.attack(B.getName());
	// B.takeDamage(5);

	// printValues(A);
	// printValues(B);

	// A.guardGuate();
	return 1;
}