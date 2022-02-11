/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:34:39 by wollio            #+#    #+#             */
/*   Updated: 2022/02/11 15:38:56 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "Constructor called" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "Destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

AMateria	&AMateria::operator = (const AMateria &copy)
{
	std::cout << "Assignation operator called" << std::endl;
}
