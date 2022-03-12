/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:06:11 by wollio            #+#    #+#             */
/*   Updated: 2022/03/12 18:27:35 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

int check_argc(int argc)
{
	if (argc != 2)
	{
		PRINT(Usage : ./scalar string);
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

/* try catch */

int main(int argc, char *argv[])
{
	if (check_argc(argc))
		return (EXIT_FAILURE);
	conversion t(argv[1]);
	std::cout << t;
	return (EXIT_SUCCESS);
}