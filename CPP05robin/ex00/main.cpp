/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 13:54:04 by coder             #+#    #+#             */
/*   Updated: 2022/01/27 11:13:40 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void) {
	std::cout << "try to create some newbies:\n";
	try {
		Bureaucrat newbie = Bureaucrat("newbie", 0);
		std::cout << newbie << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat newbie = Bureaucrat("newbie", 7);
		std::cout << newbie << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat newbie = Bureaucrat("newbie", 151);
		std::cout << newbie << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\ntry to increment the grade several times:\n";
	try {
		Bureaucrat newbie = Bureaucrat("newbie", 2);
		std::cout << newbie << std::endl;
		newbie.increment_grade();
		std::cout << newbie << std::endl;
		newbie.increment_grade();
		std::cout << newbie << std::endl;
		newbie.increment_grade();
		std::cout << newbie << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\ntry to decrement the grade several times:\n";
	try {
		Bureaucrat newbie = Bureaucrat("new", 149);
		std::cout << newbie << std::endl;
		newbie.decrement_grade();
		std::cout << newbie << std::endl;
		newbie.decrement_grade();
		std::cout << newbie << std::endl;
		newbie.decrement_grade();
		std::cout << newbie << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
}