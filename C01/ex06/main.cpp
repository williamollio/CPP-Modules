/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:15:48 by wollio            #+#    #+#             */
/*   Updated: 2022/01/14 11:18:27 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char *argv[])
{
	Karen karen;
	if (argc != 2)
	{
		std::cout << "Usage : ./karenFilter <log level>" << std::endl;
		return (EXIT_FAILURE);
	}
	karen.filter(argv[1]);
	return (EXIT_SUCCESS);
}