/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radelwar <radelwar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:59:33 by radelwar          #+#    #+#             */
/*   Updated: 2022/01/05 21:06:24 by radelwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresPardForm", 25, 5), target("default") { }

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & ref) { *this = ref; }

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresPardForm", 25, 5), target(target) { }

PresidentialPardonForm::~PresidentialPardonForm(void) { }

PresidentialPardonForm &	PresidentialPardonForm::operator = (PresidentialPardonForm const & ref) {
	this->setSigned(ref.getSigned());
	return *this;
}

void	PresidentialPardonForm::execute_inDerive(void) const {
	std::cout << target << " has been pardonded by Zafod Beeblebrox\n";
}