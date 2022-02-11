/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:49:25 by wollio            #+#    #+#             */
/*   Updated: 2022/02/11 15:49:27 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
	std::cout << "Constructor called" << std::endl;
}

ICharacter::~ICharacter(void)
{
	std::cout << "Destructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ICharacter	&ICharacter::operator = (const ICharacter &copy)
{
	std::cout << "Assignation operator called" << std::endl;
}
