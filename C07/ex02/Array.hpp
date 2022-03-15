/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 22:06:16 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/03/15 22:19:29 by wiliamollio      ###   ########.fr       */
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

};

template <typename T>
Array<T>::Array(void)
{
		T a[0];
		(void)a;
		std::cout << "Constructor called" << std::endl;
}
#endif