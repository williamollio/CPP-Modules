/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 20:02:43 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/02/14 19:16:37 by wollio           ###   ########.fr       */
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
	int i = 0;
	while (materia_src[i] && i < 3)
	{
		if (type == materia_src[i]->getType())
			return (materia_src[i]->clone());
		i++;
	}
	if (i == 0)
		std::cout << "No materias stored" << std::endl;
	else
		std::cout << "Type unknown" << std::endl;
	return (0);
}

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 3; i++)
		this->materia_src[i] = NULL;
	/* std::cout << "Constructor called" << std::endl; */
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 3; i++)
		delete this->materia_src[i];
	/* std::cout << "Destructor called" << std::endl; */
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	/* std::cout << "Copy constructor called" << std::endl; */
	*this = copy;
}

MateriaSource	&MateriaSource::operator = (const MateriaSource &copy)
{
	for (int i = 0; i < 3; i++)
	{
		delete this->materia_src[i];
		if (copy.materia_src[i])
			this->materia_src[i] = copy.materia_src[i]->clone();
	}
	/* std::cout << "Assignation operator called" << std::endl; */
	return (*this);
}
