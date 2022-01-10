/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <williamollio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:55:00 by wollio            #+#    #+#             */
/*   Updated: 2022/01/03 18:05:56 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>

using namespace std;

int main(void)
{
	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringREF = str;
	cout << "adress of the string using the variable itself : " << &str << endl;
	cout << "adress of the string using the pointer : " << stringPTR << endl;
	cout << "adress of the string using the reference : " << &stringREF << endl;
	cout << "string using the pointer : " << *stringPTR << endl;
	cout << "string using the reference : " << stringREF << endl;
	return (0);
}
