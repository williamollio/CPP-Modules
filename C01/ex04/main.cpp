/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:23:14 by wollio            #+#    #+#             */
/*   Updated: 2022/01/13 19:23:58 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char *argv[])
{
	Replace replace;
	std::string contentFile;
	std::string finalString = "";

	if (replace.inputChecker(argc) || replace.setInfile(argv[1]))
		return (EXIT_FAILURE);

	replace.setString(argv[2],argv[3]);
	replace.setBuffer();
	contentFile = replace.getBuffer().str();
	finalString = replace.replaceAllOccurrence(contentFile);

	std::ofstream ofs(newfile);
	ofs << finalString << std::endl;
	ofs.close();
	return (EXIT_SUCCESS);
}
