/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 13:39:09 by wollio            #+#    #+#             */
/*   Updated: 2021/12/17 15:58:35 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

// :: scope resolution operator
// << insert operator
// >> extraction operator

// namespace::function or variable
// flush save data from a temporary buffer to permanent storage
// end : \n + flush the stream
// stdout/count is line buffered that is the output doesnt get send to the OS until a newline is writte or the buffer is flushed
// std::cin (char input): read input from a buffer stream + if anything is pending for output, it's got flushed

// constructor and destructor haven't returned value
// a class is like a model and the instance is the dynamic part

#include <iostream>

int main (int argc, char **argv)
{
	int		i = 1;
	int		n = 0;
	int		k = 0;
	char	c;
	char	buffer[99];
	//(void) argv;

	if (argc == 1)
	{
		// send string to the standard output + \n
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
		std::cout << buffer << std::endl;
	}

	return 0;
}
