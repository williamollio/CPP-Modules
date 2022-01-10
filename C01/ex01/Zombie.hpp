/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <williamollio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 19:23:41 by wollio            #+#    #+#             */
/*   Updated: 2022/01/02 21:25:36 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H
#define __ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
	public :

		Zombie(void);
		~Zombie(void);
		void announce(void);
		void set_name(std::string name);

	private :
		std::string _name;
};

Zombie *zombieHorde(int N, std::string name);

#endif
