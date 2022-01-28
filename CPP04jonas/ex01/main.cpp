/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:29:17 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/28 11:29:29 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
	Animal const	*dog = new Dog(); // virtual des
	Animal const	*cat = new Cat();

	delete dog;//should not create a leak
	delete cat;


	// Animal	 *animals[2];

	// for (int i = 0; i < 2; i++) {

	// 	if (i % 2) {
	// 		animals[i] = new Dog();
	// 	}
	// 	else {
	// 		animals[i] = new Cat();
	// 	}
	// }

	// for (int i = 0; i < 2; i++) {

	// 	delete animals[i];
	// }

	// Cat	cat1;
	// Cat	cat2 = cat1;
	// cat1.addidea("lol");
	// cat1.addidea("toll");
	// cat1.showideas();
	// cat2.addidea("abc");
	// cat2.addidea("d");
	// cat2.showideas();
	// cat1.showideas();

	return (0);
}