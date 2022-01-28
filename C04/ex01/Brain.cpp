/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:46:23 by wollio            #+#    #+#             */
/*   Updated: 2022/01/28 16:47:35 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Constructor called for Brain" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Destructor called for Brain" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Copy constructor called for Brain" << std::endl;
	*this = copy;
}

Brain	&Brain::operator = (const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
	std::cout << "Assignation operator called for Brain" << std::endl;
	return (*this);
}

// void Brain::addIdea(std::string idea)
// {
// 	int i = 0;
// 	while (ideas[i].empty() == true && i < 100)
// 		i++;
// 	ideas[i] = idea;
// }

// void Brain::displayIdea()
// {
// 	for (int i = 0; i < 100; i++)
// 	{
// 		if (ideas[i].empty() == true)
// 			break;
// 		PRINT(ideas[i]);
// 	}
// }