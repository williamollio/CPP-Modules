/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <williamollio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:07:44 by wollio            #+#    #+#             */
/*   Updated: 2022/01/05 16:18:17 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{

	private:
		string _name;
		Weapon *_weapon;

	public:
		HumanB(string name);
		void setWeapon(Weapon &weapon);
		void attack(void);
		~HumanB(void);
};
#endif
