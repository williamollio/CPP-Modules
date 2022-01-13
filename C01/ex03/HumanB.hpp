/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:07:44 by wollio            #+#    #+#             */
/*   Updated: 2022/01/13 13:03:53 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;

	public:
		HumanB(std::string name);
		void setWeapon(Weapon &weapon);
		void attack(void);
		~HumanB(void);
};
#endif
