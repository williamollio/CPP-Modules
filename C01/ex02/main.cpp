/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:55:00 by wollio            #+#    #+#             */
/*   Updated: 2022/01/13 12:39:22 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "adress of the string using the variable itself : " << &str << std::endl;
	std::cout << "adress of the string using the pointer : " << stringPTR << std::endl;
	std::cout << "adress of the string using the reference : " << &stringREF << std::endl;
	std::cout << "string using the pointer : " << *stringPTR << std::endl;
	std::cout << "string using the reference : " << stringREF << std::endl;
	return (0);
}
