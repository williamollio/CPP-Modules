/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:59:23 by wollio            #+#    #+#             */
/*   Updated: 2022/03/20 23:07:30 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	try
	{
		Span a(100000);
		a.addNumber(10000,10000, -10000);
		int span = a.longestSpan();
		std::cout << "longest Span : " << span << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span a(3);
		a.addNumber(5);
		a.addNumber(9);
		a.addNumber(1);
		int span = a.shortestSpan();
		std::cout << "shortest Span : " << span << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span a(3);
		a.addNumber(5);
		a.addNumber(6);
		a.addNumber(9);
		a.addNumber(1);
		int span = a.shortestSpan();
		std::cout << "shortest Span : " << span << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (EXIT_SUCCESS);
}