/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:09:39 by wollio            #+#    #+#             */
/*   Updated: 2022/02/24 11:13:22 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat buro("buro", 2);
	try {
		PresidentialPardonForm test("work");
		test.setSigned(1);
		test.execute(buro);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}