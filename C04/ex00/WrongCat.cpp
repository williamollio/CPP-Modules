#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	type = "WrongCat";
	std::cout << "Constructor called for " << type << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor called for " << type << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

WrongCat	&WrongCat::operator = (const WrongCat &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	type = copy.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongAnimal is doing the sound" << std::endl;
}
