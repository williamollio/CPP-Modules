/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:06:11 by wollio            #+#    #+#             */
/*   Updated: 2022/03/09 12:07:26 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cstring>

#define PRINT(x) std::cout << #x ;
#define PRINT_NL(x, y) std::cout << #x << #y << std::endl;

int check_argc(int argc)
{
	if (argc != 2)
	{
		PRINT(Usage : ./scalar string);
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int main(int argc, char *argv[])
{
	if (check_argc(argc))
		return (EXIT_FAILURE);

	char a;
	a = *argv[1];

	int b = (int) a - 48;

	float c = (float) a - 48;

	double d = (double) a - 48;

	if ()
	std::cout << "char : " << a << std::endl;
	std::cout << "int : " << b << std::endl;
	std::cout << "float : " << c << std::endl;
	std::cout << "double : " << d << std::endl;

	return (EXIT_SUCCESS);
}