/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:15:43 by wollio            #+#    #+#             */
/*   Updated: 2022/02/24 13:37:20 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

forms Intern::hashit(std::string s1)
{
	std::string array[3] = {"Shrubbery", "Robotomy", "Presidential"};
	for (unsigned long i = 0; i < 3; i++)
		if (s1 == array[i])
			return (forms)i;
	return (forms)3;
}

Form* Intern::makeForm(std::string s1, std::string s2)
{

	switch(hashit(s1))
	{
		case Shrubbery :
			return (new ShrubberyCreationForm(s2));
		case Robotomy :
			return (new RobotomyRequestForm(s2));
		case Presidential :
			return (new PresidentialPardonForm(s2));
		default :
			throw (std::invalid_argument("Form not identified"));
	}
}

Intern::~Intern(void)
{
}

Intern::Intern(const Intern &copy)
{
	(void)copy;
	*this = copy;
}

Intern	&Intern::operator = (const Intern &copy)
{
	(void)copy;
	return (*this);
}
