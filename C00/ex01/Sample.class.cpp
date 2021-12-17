/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:18:44 by wollio            #+#    #+#             */
/*   Updated: 2021/12/17 15:36:41 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(void)
{
	std::cout << "Constructor" << std::endl;
}

Sample::~Sample(void)
{
	std::cout << "Destructor" << std::endl;
}

// type - classname - identifier - parameters
void Sample::bar (void)
{
	Sample::foo = 2;
	std::cout << "Member function bar" << std::endl;
}