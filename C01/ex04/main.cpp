/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:23:14 by wollio            #+#    #+#             */
/*   Updated: 2022/01/12 16:49:03 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char *argv[])
{
	Replace replace;

	if (replace.inputChecker(argc))
		return (EXIT_FAILURE);

	std::fstream file;
	file.open(argv[1], std::fstream::in);
	if (file == NULL)
	{
		std::cout << "Opening of the file failed" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::stringstream buffer;
	buffer << file.rdbuf();
	file.close();
	std::string s = buffer.str();
	std::string new_s = "";

	size_t pos = 0;
	size_t prevPos = 0;
	int i = 0;
	pos = s.find(s1, 0);
	while (pos != std::string::npos)
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

	std::string newfile = argv[1];
	newfile += ".replace";
	std::ofstream ofs(newfile);
	ofs << new_s << std::endl;
	ofs.close();
	return (EXIT_SUCCESS);
}
