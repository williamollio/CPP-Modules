/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radelwar <radelwar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 13:54:04 by coder             #+#    #+#             */
/*   Updated: 2022/01/26 15:47:52 by radelwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include <iostream>
#include "../inc/Intern.hpp"

int	main(void) {
	Intern dumbo;
	Bureaucrat nerd("Nerd", 1);
	Form *	form;

	std::cout << "create Robotomy form\n";
	form = dumbo.makeForm("robotomy request", "42 HN");
	form->beSigned(nerd);
	form->execute(nerd);

	std::cout << "\ncreate Presidential form\n";
	form = dumbo.makeForm("presidential pardon", "Evaluator");
	form->beSigned(nerd);
	form->execute(nerd);

	std::cout << "\ncreate Shrubbery form\n";
	form = dumbo.makeForm("shrubbery creation", "Backyard");
	form->beSigned(nerd);
	form->execute(nerd);

	std::cout << "\ncreate invalid form\n";
	form = dumbo.makeForm("some shit", "Target");
	if (!form)
		std::cout << "test successfull\n";
}