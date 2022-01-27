/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:49:24 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/01/27 11:50:58 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		string Name;
	public:
		DiamondTrap(void);
		DiamondTrap(string Name);
		~DiamondTrap(void);
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap	&operator = (const DiamondTrap &copy);
		void attack(std::string const & target);
		void whoAmI();
		void init(std::string name);
};

#endif
