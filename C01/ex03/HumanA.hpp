/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:07:41 by wollio            #+#    #+#             */
/*   Updated: 2022/01/13 12:42:37 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
class HumanA
{
	private :
		std::string _name;
		Weapon &_weapon;
	public :
		HumanA(std::string str, Weapon &weapon);
		~HumanA(void);
		void attack(void);
};
#endif
