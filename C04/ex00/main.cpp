/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:37:31 by wollio            #+#    #+#             */
/*   Updated: 2022/01/28 16:26:31 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* w = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << w->getType() << " " << std::endl;
	meta->makeSound();
	j->makeSound();
	i->makeSound();
	w->makeSound();
	delete w;
	delete meta;
	delete j;
	delete i;
	return 0;
}

// int main()
// {
//     std::cout << "Constructors" << std::endl;
//     const Animal* meta = new Animal();
//     const Animal* i = new Dog();
//     const Animal* j = new Cat();
// 	const Cat *c = new Cat();
//     const Animal copy(*j);
//     const Cat copy2(*c);

//     std::cout << std::endl << "getType()" << std::endl;
//     std::cout << meta->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << copy.getType() << " " << std::endl;
//     std::cout << copy2.getType() << " " << std::endl;

//     std::cout << std::endl << "makeSound()" << std::endl;
//     meta->makeSound();
//     i->makeSound();
//     j->makeSound();
//     copy.makeSound();
//     copy2.makeSound();

//     std::cout << std::endl << "Deconstructors" << std::endl;
//     delete meta;
//     delete i;
//     delete j;
//     return (0);
// }