/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <williamollio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 19:23:41 by wollio            #+#    #+#             */
/*   Updated: 2022/01/01 22:49:36 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H
#define __ZOMBIE_H

#include <iostream>

class Zombie
{
	public :

	Zombie(std::string name);
	~Zombie(void);

	private :
	int a;
};

#endif
