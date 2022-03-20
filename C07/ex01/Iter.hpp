#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void print_el(T &el)
{
	std::cout << el << std::endl;
}

template <typename T>
void iter(T *address, const int length, void function (T &el))
{
	for (int i = 0; i < length; i++)
		function(address[i]);
}

#endif