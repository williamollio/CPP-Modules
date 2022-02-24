/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:01:20 by wollio            #+#    #+#             */
/*   Updated: 2022/02/24 10:39:44 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137), _target("None")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	*this = copy;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator = (const ShrubberyCreationForm &copy)
{
	this->setSigned(copy.getSigned());
	return (*this);
}

void ShrubberyCreationForm::execute_sub_form(void) const
{
	std::string name;
	name = _target + "_shrubbery";
	std::ofstream outfile (name);
	outfile << " *\n/ \\\n/ \\\n |\n\n" << std::endl;
	outfile.close();
}