/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:22:11 by wollio            #+#    #+#             */
/*   Updated: 2022/01/12 16:44:58 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Replace::Replace(void)
{

}

Replace::~Replace(void)
{

}

int Replace::inputChecker(int argc)
{
	if (argc != 4)
	{
		std::cout << "Error number of arguments" << std::endl;
		std::cout << "Usage : \"path to file.txt\" \"string1\" \"string2\"" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}