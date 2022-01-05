/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <williamollio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:08:06 by wollio            #+#    #+#             */
/*   Updated: 2022/01/05 14:43:53 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

int main(void)
{
	{
		Weapon famas = Weapon("famas");
		HumanA will("will", famas);
		will.attack();
		famas.setType("new famas");
		will.attack();
	}

}
