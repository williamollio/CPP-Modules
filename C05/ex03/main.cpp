/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:09:39 by wollio            #+#    #+#             */
/*   Updated: 2022/02/24 13:37:41 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main(void)
{
	Bureaucrat buro("buro", 2);
	try {
		Intern intern;
		Form *test;
		test = intern.makeForm("Shrubbery", "work");
		//PresidentialPardonForm test("work");
		test->setSigned(1);
		test->execute(buro);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}