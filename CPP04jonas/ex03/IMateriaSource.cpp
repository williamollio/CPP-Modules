/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:42:19 by wollio            #+#    #+#             */
/*   Updated: 2022/02/11 16:42:20 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
{
	std::cout << "Constructor called" << std::endl;
}

IMateriaSource::~IMateriaSource(void)
{
	std::cout << "Destructor called" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

IMateriaSource	&IMateriaSource::operator = (const IMateriaSource &copy)
{
	std::cout << "Assignation operator called" << std::endl;
}
