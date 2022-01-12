/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:23:14 by wollio            #+#    #+#             */
/*   Updated: 2022/01/12 10:54:26 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		cout << "Error number of arguments" << endl;
		cout << "Usage : \"path to file.txt\" \"string1\" \"string2\"" << endl;
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
	file.close();
	string s = buffer.str();
	string new_s = "";

	size_t pos = 0;
	size_t prevPos = 0;
	int i = 0;
	pos = s.find(s1, 0);
	while (pos != string::npos)
	{
		new_s += s.substr(prevPos, pos - prevPos);
		new_s += s2;
		pos += s1.length();
		prevPos = pos;
		pos = s.find(s1, prevPos);
		i++;
	}
	if (new_s != "")
		new_s += s.substr(prevPos, s1.length());
	else
		new_s = s;

	string newfile = argv[1];
	newfile += ".replace";
	ofstream ofs(newfile);
	ofs << new_s << endl;
	ofs.close();
	return (EXIT_SUCCESS);
}
