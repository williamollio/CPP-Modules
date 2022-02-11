/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:43:00 by wollio            #+#    #+#             */
/*   Updated: 2022/02/11 16:43:00 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "Constructor called" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "Destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

MateriaSource	&MateriaSource::operator = (const MateriaSource &copy)
{
	std::cout << "Assignation operator called" << std::endl;
}