/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 21:22:27 by wollio            #+#    #+#             */
/*   Updated: 2022/01/25 16:26:25 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cstring>

using namespace std;
class ClapTrap
{
	protected:
		string Name;
		int Hitpoints;
		int Energypoints;
		int Attackdamage;
	public:
		ClapTrap(void);
		ClapTrap(string name);
		~ClapTrap(void);
		ClapTrap(const ClapTrap &copy);
		string getName(void);
		int getHitpoints(void);
		int getEnergypoints(void);
		int getAttackdamagepoints(void);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		ClapTrap	&operator= (const ClapTrap &copy);
};

#endif
