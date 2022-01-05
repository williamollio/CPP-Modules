/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <williamollio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:08:04 by wollio            #+#    #+#             */
/*   Updated: 2022/01/03 22:06:16 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

using namespace std;

// a default constructor has no paramaters
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
