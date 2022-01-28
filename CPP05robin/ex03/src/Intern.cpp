/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radelwar <radelwar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 22:11:48 by radelwar          #+#    #+#             */
/*   Updated: 2022/01/05 22:37:50 by radelwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

Intern::Intern(void) { }

Intern::Intern(Intern const & ref) { (void)ref; }

Intern::~Intern(void) { }

Intern & Intern::operator = (Intern const & ref) {
	(void)ref;
	return *this;
}

Form *	Intern::makeForm(std::string form_name, std::string target) {
	unsigned long	form_index;
	std::string possible_form_names[] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	for (form_index = 0; form_index < sizeof(possible_form_names); form_index++) {
		if (form_name == possible_form_names[form_index])
			break;
	}
	switch (form_index) {
		case 0:
			return new PresidentialPardonForm(target);
		case 1:
			return new RobotomyRequestForm(target);
		case 2:
			return new ShrubberyCreationForm(target);
		default:
			std::cout << "not a known form\n";
			return NULL;
	}
}