/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:23:14 by wollio            #+#    #+#             */
/*   Updated: 2022/01/11 18:22:44 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

using namespace std;

int ft_count_occ(string s, const char *del, string s1)
{
	int count = 0;
	size_t pos = s.find(s1, 0);
	while (pos != -1)
	{
		count++;
		pos = s.find(s1, pos + 1);
	}
	return (count);
}

int ft_count_words(string s)
{
	int count = 1;
	stringstream stream(s);
	string oneWord;
	while (stream >> oneWord)
		count++;
	return (count);
}

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
	string s = buffer.str();

	const char *del = " ";
	char *s_modif = const_cast <char *>(s.c_str());
	int count_occ = ft_count_occ(s, del, s1);
	char *ptr = strtok(s_modif, del);
	int count_words = ft_count_words(s);
	char *arr[count_words];
	int i = 0;
	while (ptr != NULL)
	{
		stringstream stream;
		string ptr_string;
		stream << ptr;
		stream >> ptr_string;
		if (s1 == ptr_string)
			arr[i] = const_cast <char *>(s2.c_str());
		else
			arr[i] = ptr;
		ptr = strtok(NULL, del);
		i++;
	}
	for (int i = 0; i < count_words ; i++)
	{
		cout << "arr[i]" << arr[i] << endl;
	}
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
