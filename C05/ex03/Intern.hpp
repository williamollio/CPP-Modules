/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:15:40 by wollio            #+#    #+#             */
/*   Updated: 2022/02/24 11:42:27 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.h"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

enum forms {
	Shrubbery,
	Robotomy,
	Presidential,
};

class Form;

class Intern
{
	public:
		Intern(void);
		forms hashit(std::string s1);
		Form* makeForm(std::string s1, std::string s2);
		~Intern(void);
		Intern(const Intern &copy);

		Intern	&operator = (const Intern &copy);
};

#endif
