/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:52:32 by wollio            #+#    #+#             */
/*   Updated: 2022/03/21 00:09:53 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int main(void)
{
	int a = -1;
	int b = 10;

	std::cout << "a : " << a << std::endl
	<< "b : " << b << std::endl;
	::swap(a, b);
	std::cout << "swap " << std::endl
	<< "a : " << a << std::endl
	<< "b : " << b << std::endl
	<< "min : " << ::min(a, b) << " | max : " << ::max(a, b) << std::endl;

	return (EXIT_SUCCESS);
}