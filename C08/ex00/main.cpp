/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 18:32:35 by wollio            #+#    #+#             */
/*   Updated: 2022/03/20 19:57:34 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::vector <int> t;
	std::vector<int>::iterator i;

	t.push_back(1);
	t.push_back(6);
	try
	{
		i = easyfind(t, 6);
		std::cout << *i << " found" << std::endl;
		i = easyfind(t, 11);
		std::cout << *i << " found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (EXIT_SUCCESS);
}