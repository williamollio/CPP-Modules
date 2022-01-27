/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:46:23 by wollio            #+#    #+#             */
/*   Updated: 2022/01/27 17:46:28 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Destructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Brain	&Brain::operator = (const Brain &copy)
{
	std::cout << "Assignation operator called" << std::endl;
}
