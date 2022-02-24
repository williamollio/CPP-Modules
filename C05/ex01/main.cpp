/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:09:39 by wollio            #+#    #+#             */
/*   Updated: 2022/02/24 14:14:53 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "try to create a form with wrong grades\n";
	Bureaucrat newbie = Bureaucrat("new", 50);
	try {
		Form formula = Form("work", 0, 50);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\ncreating a valid form and sign it\n";
	Form form = Form("workload", 90, 90);
	std::cout << form << std::endl;
	try {
		form.beSigned(newbie);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << form << std::endl;

	std::cout << "\ntry to sign a form with a grade too high\n";
	std::cout << newbie << std::endl;
	Form president = Form("top secret", 1, 1);
	std::cout << president << std::endl;
	try {
		president.beSigned(newbie);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << president << std::endl;
	return (0);
}