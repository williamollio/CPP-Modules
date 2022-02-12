/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:10:15 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/02/11 20:27:32 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	// ICharacter* bob = new Character("bob");

	AMateria* tmp;

	tmp = src->createMateria("ice");
	AMateria* test0 = new Ice();
	AMateria* test1 = new Cure();
	AMateria* test2 = new Cure();
	AMateria* test3 = new Ice();
	me->equip(test0);
	me->equip(test1);
	me->equip(test2);
	me->equip(test3);
	me->unequip(3);
	// me->use(0, *bob);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);


	// me->equip(tmp);
	// me->use(0, *bob);
	// me->use(1, *bob);

	delete test0;
	delete test1;
	delete test2;
	delete test3;
	delete me;
	delete src;

	return (0);
}
