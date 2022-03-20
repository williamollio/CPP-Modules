/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:59:23 by wollio            #+#    #+#             */
/*   Updated: 2022/03/20 21:21:48 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span a(6);
	try
	{
		a.addNumber(1);
		a.addNumber(4);
		a.addNumber(2);
		a.addNumber(9);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (EXIT_SUCCESS);
}