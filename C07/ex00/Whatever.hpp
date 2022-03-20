/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 00:04:20 by wollio            #+#    #+#             */
/*   Updated: 2022/03/21 00:05:46 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
template<typename T>
void swap(T &arg, T &arg2)
{
	T arg3;
	arg3 = arg;
	arg = arg2;
	arg2 = arg3;
}

template<typename T>
T const & min(T const &arg, T const &arg2)
{
	if (arg < arg2)
		return arg;
	return arg2;
}

template<typename T>
T const &max(T const &arg, T const &arg2)
{
	if (arg > arg2)
		return arg;
	return arg2;
}

#endif