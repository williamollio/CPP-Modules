/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:15:49 by wollio            #+#    #+#             */
/*   Updated: 2022/01/12 16:20:53 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

void Karen::debug(void)
{
	std::cout << "[DEBUG]" << std::endl << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ERROR]" << std::endl << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

message Karen::hashit(std::string level)
{
	int i = 0;
	std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4)
	{
		if (array[i] == level)
			return ((message)i);
		i++;
	}
	return ((message)i);
}

void Karen::filter(std::string level)
{
	typedef void(Karen::*func)();
	int i = 0;
	std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	func a[] = {&Karen::debug , &Karen::info , &Karen::warning , &Karen::error};

	switch (hashit(level))
	{
		case
		 :
				(this->*a[0])();
		case INFO :
				(this->*a[1])();
		case WARNING :
				(this->*a[2])();
		case ERROR :
				(this->*a[3])();
				break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}

}