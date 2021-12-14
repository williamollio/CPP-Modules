#include "smth.hpp"

smth::smth(void)
{
	std::cout << "Constructor called" << std::endl;
}

smth::~smth(void)
{
	std::cout << "Destructor called" << std::endl;
}

smth::smth(const smth &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

smth	&smth::operator = (const smth &copy)
{
	std::cout << "Assignation operator called" << std::endl;
}
