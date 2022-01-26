/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:21:59 by wollio            #+#    #+#             */
/*   Updated: 2022/01/25 20:50:18 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void printValues (DiamondTrap &x)
{
	cout << "The "<< x.getName() << " has " << x.getHitpoints() << " Hitpoints "
	<< x.getEnergypoints() << " Energy points and " << x.getAttackdamagepoints() << " Attack damage received !" << endl;
}

int main(void)
{
	DiamondTrap A ("A");
	A.whoAmI();
	printValues(A);
	A.attack("B");
	A.highFivesGuys();
	return 1;
}