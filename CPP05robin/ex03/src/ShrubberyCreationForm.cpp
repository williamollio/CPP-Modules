/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radelwar <radelwar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 21:20:28 by radelwar          #+#    #+#             */
/*   Updated: 2022/01/05 21:56:57 by radelwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubCreaForm", 145, 137), target("default") { }

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & ref) { *this = ref; }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubCreaForm", 145, 137), target(target) { }

ShrubberyCreationForm::~ShrubberyCreationForm(void) { }

ShrubberyCreationForm &	ShrubberyCreationForm::operator = (ShrubberyCreationForm const & ref) {
	this->setSigned(ref.getSigned());
	return *this;
}

void	ShrubberyCreationForm::execute_inDerive(void) const {
	std::fstream	outfile;

	outfile.open(target + "_shrubbery", std::ios::app);
	if (!outfile)
		exit(1);
	outfile << " *\n/ \\\n/ \\\n |\n\n";
	outfile.close();
}