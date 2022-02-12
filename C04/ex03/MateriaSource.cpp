/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 20:02:43 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/02/11 20:26:38 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;
	while (materia_src[i] && i < 3)
		i++;
	if (materia_src[i])
		std::cout << "Materias are full" << std::endl;
	else
		materia_src[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type == "cure")
		return (new Cure()); // use clone function
	else if (type == "ice")
		return (new Ice());
	else
	{
		std::cout << "Type unknown" << std::endl;
		return (0);
	}
}

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
	return (*this);
}
