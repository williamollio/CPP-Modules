/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:06:27 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/03/15 22:02:51 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(void)
{
	const int length = 10;
	int array[length];
	for (int i = 0; i < length;i++)
		array[i] = i;
	iter(array, length, print_el);
	return (EXIT_SUCCESS);
}