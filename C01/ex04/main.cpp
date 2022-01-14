/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:23:14 by wollio            #+#    #+#             */
/*   Updated: 2022/01/14 10:57:51 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char *argv[])
{
	Replace replace;
	std::string contentFile;
	std::string finalString;
	std::stringstream buffer;
	std::fstream file;

	if (replace.inputChecker(argc))
		return (EXIT_FAILURE);

	file.open(argv[1], std::fstream::in);
	if (file == NULL)
	{
		std::cout << "Opening of the file failed" << std::endl;
		return (EXIT_FAILURE);
	}
	if (file == NULL)
		return (EXIT_FAILURE);
	buffer << file.rdbuf();
	contentFile = buffer.str();
	file.close();

	replace.setString(argv[2],argv[3]);
	finalString = replace.replaceAllOccurrence(contentFile);

	std::string newfile = argv[1];
	newfile += ".replace";
	std::ofstream ofs(newfile);
	ofs << finalString << std::endl;
	ofs.close();
	return (EXIT_SUCCESS);
}
