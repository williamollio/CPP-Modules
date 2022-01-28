/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:29:17 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/28 11:17:03 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


// int main()
// {
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog(); // should based class destructor virtual
	// const Animal* i = new Cat();

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound();
	// j->makeSound();
	// meta->makeSound();
	// delete(meta);
	// delete(j);
	// delete(i);

// 	const WrongAnimal* meta = new WrongAnimal();
// 	const WrongAnimal* j = new WrongCat();

// 	meta->makeSound();
// 	j->makeSound();
// 	delete(meta);
// 	delete(j);

// 	return (0);
// }


int main()
{
    std::cout << "Constructors" << std::endl;
    const Animal* meta = new Animal();
    const Animal* i = new Dog();
    const Animal* j = new Cat();
	const Cat *c = new Cat();
    const Animal copy(*j);
    const Animal copy2(*c);
    std::cout << std::endl << "getType()" << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << copy.getType() << " " << std::endl;
    std::cout << copy2.getType() << " " << std::endl;
    std::cout << std::endl << "makeSound()" << std::endl;
    meta->makeSound();
    i->makeSound();
    j->makeSound();
    copy.makeSound();
    copy2.makeSound();
    std::cout << std::endl << "Deconstructors" << std::endl;
    delete meta;
    delete i;
    delete j;
    return (0);
}