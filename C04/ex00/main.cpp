/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:37:31 by wollio            #+#    #+#             */
/*   Updated: 2022/01/27 17:13:09 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp" //
# include "WrongAnimal.hpp" //
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