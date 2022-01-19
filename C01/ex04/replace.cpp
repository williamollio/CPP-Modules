/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:22:11 by wollio            #+#    #+#             */
/*   Updated: 2022/01/14 14:38:35 by wiliamollio      ###   ########.fr       */
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

void Replace::setString(std::string argv2, std::string argv3)
{
	this->_s1 = argv2;
	this->_s2 = argv3;
}


std::string Replace::replaceAllOccurrence(std::string contentFile)
{
	std::string s1 = this->_s1;
	std::string s2 = this->_s2;
	std::string finalString = "";
	size_t pos = 0;
	size_t prevPos = 0;
	int i = 0;

	pos = contentFile.find(s1, 0);
	while (pos != std::string::npos)
	{
		finalString += contentFile.substr(prevPos, pos - prevPos);
		finalString += s2;
		pos += s1.length();
		prevPos = pos;
		pos = contentFile.find(s1, prevPos);
		i++;
	}
	if (finalString != "")
		finalString += contentFile.substr(prevPos, contentFile.length());
	else
		finalString = contentFile;
	return (finalString);
}