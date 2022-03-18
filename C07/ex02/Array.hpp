/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 22:06:16 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/03/18 21:30:38 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	private :

	public:
	Array(void);
	Array(unsigned int n);

};

template <typename T>
Array<T>::Array(void)
{
	T a[0];
	(void)a;
	std::cout << "Default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	int a[n];
	for (unsigned int i = 0; i < n; i++)
		a[i] = NULL;
	std::cout << "Parameterized constructor called" << std::endl;
}
#endif