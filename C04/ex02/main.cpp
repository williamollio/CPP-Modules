#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	// Animal test;

	Animal *dog = new Dog();
	Animal *cat = new Cat();
	dog->makeSound();
	cat->makeSound();
	delete dog;
	delete cat;

	return (0);
}