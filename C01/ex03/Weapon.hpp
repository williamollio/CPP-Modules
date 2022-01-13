/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:08:04 by wollio            #+#    #+#             */
/*   Updated: 2022/01/13 12:43:06 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	private :
		std::string _name;
	public :
		Weapon(std::string str);
		~Weapon(void);
		const std::string &getType(void);
		void setType(std::string str);
};

#endif
