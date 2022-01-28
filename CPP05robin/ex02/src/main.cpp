/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radelwar <radelwar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 13:54:04 by coder             #+#    #+#             */
/*   Updated: 2022/01/26 15:31:24 by radelwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include <iostream>
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

int	main(void) {
	Bureaucrat hans("Hansi", 99);
	Bureaucrat nerd("Nerdi", 1);
	Form * forms[3];

	//following won't work:
	//forms[2] = new Form();

	forms[0] = new PresidentialPardonForm("Horst Schlemmer");
	std::cout << *(forms[0]) << std::endl;

	std::cout << "\ntry to execute a form with a too bad grade\n";
	try {
		forms[0]->execute(hans);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;

	std::cout << "\ntry to execute a unsigned form\n";
	}
	try {
		forms[0]->execute(nerd);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\nsigning and execution should work\n";
	try {
		forms[0]->beSigned(nerd);
		forms[0]->execute(nerd);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\ndoing several times the Robotomy form\n";
	forms[1] = new RobotomyRequestForm("Excavator");
	forms[1]->beSigned(nerd);
	forms[1]->execute(nerd);
	forms[1]->execute(nerd);
	forms[1]->execute(nerd);
	forms[1]->execute(nerd);

	std::cout << "\ndoing the Shrubbery form\n";
	forms[2] = new ShrubberyCreationForm("tree");
	forms[2]->beSigned(hans);
	forms[2]->execute(hans);
}