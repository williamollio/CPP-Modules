/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:23:24 by wollio            #+#    #+#             */
/*   Updated: 2022/03/21 15:10:57 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> istack;

	istack.push(5);
	istack.push(17);
	istack.push(3);
	istack.push(5);
	istack.push(737);

	std::cout << "First at the top : " << istack.top() << std::endl;
	istack.pop();
	std::cout << "Pop the stack" << std::endl;
	std::cout << "Size : " << istack.size() << std::endl;


	MutantStack<int>::iterator int_it_begin = istack.begin();
	MutantStack<int>::iterator int_it_end = istack.end();
	++int_it_begin;
	--int_it_begin;
	while (int_it_begin != int_it_end)
	{
		std::cout << *int_it_begin << std::endl;
		++int_it_begin;
	}

	MutantStack<std::string> cstack;
	cstack.push("Goodbye");
	cstack.push("CPP");

	std::cout << std::endl << "First at the top : " << cstack.top() << std::endl;
	cstack.pop();
	std::cout << "Pop the stack" << std::endl;
	std::cout << "Size : " << cstack.size() << std::endl;

	MutantStack<std::string>::iterator char_it_begin = cstack.begin();
	MutantStack<std::string>::iterator char_it_end = cstack.end();
	++char_it_begin;
	--char_it_begin;
	while (char_it_begin != char_it_end)
	{
		std::cout << *char_it_begin << std::endl;
		++char_it_begin;
	}
	return 0;
}