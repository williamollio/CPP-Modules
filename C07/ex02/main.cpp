/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 22:06:49 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/03/21 00:21:13 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	try
	{
		P(FIRST)
		Array<unsigned int> a(6);
		for (unsigned int i = 0; i < 6; i++)
			a.setArray(i, i);

		unsigned int value = 5;
		std::cout << "Use of subscript operator at index "<< value << " : "<< a[value] << std::endl;
		a[value] = 99;
		std::cout << "Set a["<< value << "] to : " << a[value] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		P(\nSECOND)
		Array<unsigned int> a(5);
		for (unsigned int i = 0; i < 5; i++)
			a.setArray(i, i);
		Array<unsigned int> b(a);

		std::cout << "Init : ";
		std::cout << std::endl << " a : ";
		for (unsigned int i = 0; i < 5; i++)
			std::cout << a.getValueArray(i) << " " ;
		std::cout << std::endl << " b : ";
		for (unsigned int i = 0; i < 5; i++)
			std::cout <<  b.getValueArray(i) << " ";

		unsigned int x = 0;
		for (unsigned int i = 5; i != 0; i--)
		{
			b.setArray(i, x);
			x++;
		}
		std::cout << std::endl << "After Deep Copy :";
		std::cout << std::endl << " a : ";
		for (unsigned int i = 0; i < 5; i++)
			std::cout << a.getValueArray(i) << " ";
		std::cout << std::endl << " b : ";
		for (unsigned int i = 0; i < 5; i++)
			std::cout << b.getValueArray(i) << " ";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		P(\n\nTHIRD)
		Array<unsigned int> a(5);

		P(Leaks\n);
		for (unsigned int i = 0; i < 5; i++)
			a.setArray(i, i);
		Array<unsigned int> b(a);
		unsigned int x = 0;
		for (unsigned int i = 5; i != 0; i--)
		{
			b.setArray(i, x);
			x++;
		}
		Array<unsigned int> c;
		c = a;
		c = b;
		x = 0;
		for (unsigned int i = 5; i != 0; i--)
		{
			c.setArray(i, x);
			x++;
		}
		c = b;
		//system("Leaks array");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (EXIT_SUCCESS);
}