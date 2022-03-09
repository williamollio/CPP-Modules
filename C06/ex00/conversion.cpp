#include "conversion.hpp"

conversion::conversion(void)
{
	std::cout << "Constructor called" << std::endl;
}

conversion::~conversion(void)
{
	std::cout << "Destructor called" << std::endl;
}

conversion::conversion(const conversion &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

conversion	&conversion::operator = (const conversion &copy)
{
	std::cout << "Assignation operator called" << std::endl;
}
