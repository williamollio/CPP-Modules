/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 13:39:09 by wollio            #+#    #+#             */
/*   Updated: 2022/01/10 13:33:31 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
	int		i = 1;
	int		n = 0;
	int		k = 0;
	char	c;
	char	buffer[99];

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	else
	{
		while (i < argc)
		{
			n = 0;
			while (argv[i][n])
			{
				c = argv[i][n];
				if ((c <= 'z' && c >= 'a'))
					c -= 32;
				buffer[k] = c;
				n++;
				k++;
				}
		i++;
		}
		buffer[k] = '\0';
		std::cout << buffer << std::endl;
	}

	return 0;
}
