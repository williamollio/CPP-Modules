/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:08:04 by wollio            #+#    #+#             */
/*   Updated: 2022/01/12 16:22:23 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

using namespace std;
class Weapon
{
	private :
		string _name;
	public :
		Weapon(string str);
		~Weapon(void);
		const string &getType(void);
		void setType(string str);
};

#endif
