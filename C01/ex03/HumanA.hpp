/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <williamollio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:07:41 by wollio            #+#    #+#             */
/*   Updated: 2022/01/03 22:32:45 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private :
		string _name;
		Weapon &_weapon;
	public :
		HumanA(string str, Weapon &weapon);
		~HumanA(void);
		void attack(void);
};
#endif
