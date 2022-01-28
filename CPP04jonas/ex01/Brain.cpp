/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 13:13:52 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/28 11:25:28 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor called" << std::endl;
}

Brain::Brain(const Brain & src)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = src; //
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain & src)
{
	std::cout << "Brain Overload called" << std::endl;
	for (int i = 0; i < 100; i++){
		this->ideas[i] = src.ideas[i];
	}
	return (*this);
}

void	Brain::addidea(std::string idea)
{
	int i = 0;

	while (!this->ideas[i].empty())
		i++;
	if (i < 100)
		this->ideas[i] = idea;
}

void	Brain::showideas() const
{
	for (int i = 0; i < 100; i++)
	{
		if (this->ideas[i].empty())
			break;
		std::cout << "Idea Nr. " << i + 1 << ": " << ideas[i] << std::endl;
	}
}