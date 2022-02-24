/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:58:46 by wollio            #+#    #+#             */
/*   Updated: 2022/02/24 10:39:58 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5), _target("None")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	*this = copy;
}

PresidentialPardonForm	&PresidentialPardonForm::operator = (const PresidentialPardonForm &copy)
{
	this->setSigned(copy.getSigned());
	return (*this);
}
void PresidentialPardonForm::execute_sub_form(void) const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}


