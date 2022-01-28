/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radelwar <radelwar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 13:54:04 by coder             #+#    #+#             */
/*   Updated: 2022/01/26 15:16:07 by radelwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int	main(void) {
	std::cout << "try to create a form with wrong grades\n";
	Bureaucrat newbie = Bureaucrat("new", 50);
	try {
		Form formula = Form("work", 0, 50);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\ncreating a valid form an sign it\n";
	Form form = Form("workload", 90, 90);
	std::cout << form << std::endl;
	try {
		form.beSigned(newbie);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << form << std::endl;

	std::cout << "\ntry to sign a form with a to high grade\n";
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
}