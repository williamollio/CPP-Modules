/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:15:49 by wollio            #+#    #+#             */
/*   Updated: 2022/01/14 11:07:38 by wiliamollio      ###   ########.fr       */
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
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	typedef void(Karen::*func)();
	int i = 0;
	std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	func a[] = {&Karen::debug , &Karen::info , &Karen::warning , &Karen::error};

	while (i < 4)
	{
		if (level == array[i])
		{
			(this->*a[i])();
			break;
		}
		i++;
	}
	if (level != array[i])
		std::cout << "Bad input" << std::endl << "Usage : DEBUG, INFO, WARNING or ERROR" << std::endl;
}