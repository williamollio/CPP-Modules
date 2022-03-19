/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 22:06:49 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/03/19 16:49:13 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<unsigned int > a(5);

	for (unsigned int i = 0; i < 5; i++)
		a.setArray(i, i);

	for (unsigned int i = 0; i < a.getSize(); i++)
		std::cout << a.getValueArray(i) << std::endl;
	return (EXIT_SUCCESS);
}