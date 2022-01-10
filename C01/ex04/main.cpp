/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <williamollio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:23:14 by wollio            #+#    #+#             */
/*   Updated: 2022/01/05 22:30:44 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		cout << "Error number of arguments" << endl;
		return (EXIT_FAILURE);
	}
	fstream file;
	file.open(argv[1], fstream::in);
	if (file == NULL)
	{
		cout << "Opening of the file failed" << endl;
		return (EXIT_FAILURE);
	}
	string s1 = argv[2];
	string s2 = argv[3];

	stringstream buffer;
	buffer << file.rdbuf();
	cout << "s : " << buffer.str() << endl;
	cout << "s1 : " << s1 << endl;
	cout << "s2 : " << s2 << endl;
	// find returns npos if the character isn't found
	//string del = " ";
	//while ()

	file.close();
	// int dst;
	// int dst2;
	// ifps >> dst >> dst2;
	// cout << "dst : " << dst << " / dst2 : " << dst2 << endl;

	// ofstream ofs("test.out");
	// string test = "j'aime les chats";
	// ofs << test << endl;
	// ofs.close();
	return (EXIT_SUCCESS);
}
