/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:52:32 by wollio            #+#    #+#             */
/*   Updated: 2022/03/15 15:37:14 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"
#include <iostream>

int main(void)
{
	int a = 1;
	int b = 2;
	::swap(a, b);

	std::cout << "a : " << a << std::endl
	<< "b : " << b << std::endl
	<< "swap " << std::endl
	<< "a : " << a << std::endl
	<< "b : " << b << std::endl
	<< "min : " << ::min(a, b) << " | max : " << ::max(a, b) << std::endl;

	return (EXIT_SUCCESS);
}