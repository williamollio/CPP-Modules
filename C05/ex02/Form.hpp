/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:52:44 by wollio            #+#    #+#             */
/*   Updated: 2022/02/23 19:15:14 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include <exception>

class Bureaucrat;
class Form
{
	private:
		const std::string _name;
		bool _signed;
		const int _grade_sign;
		const int _grade_execute;

	public:
		Form(void);
		Form(std::string name, const int grade_sign, const int grade_execute);
		~Form(void);
		Form(const Form &copy);
		std::string getName() const;
		int getGradeSign() const;
		int getGradeExecute() const;
		bool getSigned() const;
		void setSigned(bool signed_);
		void beSigned(Bureaucrat bureaucrat);
		Form	&operator = (const Form &copy);
		virtual void execute_sub_form(void) = 0;
		void execute(Bureaucrat const & executor) const;
	class GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char* what() const throw();
	};

};

std::ostream & operator<<(std::ostream &out, const Form &c);

#endif