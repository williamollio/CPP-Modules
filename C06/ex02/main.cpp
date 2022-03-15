/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 21:22:30 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/03/15 11:13:09 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base *generate(void)
{
	Base *rt;

	srand(time(0));
	if (rand() % 3 == 0)
		rt = new A();
	else if (rand() % 3 == 1)
		rt = new B();
	else
		rt = new C();
	return rt;
}

void identify(Base* p)
{
	if (A *a = dynamic_cast<A*>(p))
		std::cout << "A type" << std::endl;
	else if (B *b = dynamic_cast<B*>(p))
		std::cout << "B type" << std::endl;
	else if (C *c = dynamic_cast<C*>(p))
		std::cout << "C type" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
	return;
}

void identify(Base& p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A type" << std::endl;
	}
	catch( std::bad_cast) {}
	try
	{
		B	&b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B type" << std::endl;
	}
	catch( std::bad_cast) {}
	try
	{
		C	&c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C type" << std::endl;
	}
	catch( std::bad_cast) {}
}

int main(void)
{
	Base *p = generate();
	identify(p);
	identify(*p);
	return (EXIT_SUCCESS);
}