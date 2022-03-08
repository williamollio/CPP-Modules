/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:52:44 by wollio            #+#    #+#             */
/*   Updated: 2022/03/08 20:34:02 by wiliamollio      ###   ########.fr       */
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
		virtual ~Form(void);
		Form(const Form &copy);
		std::string getName() const;
		int getGradeSign() const;
		int getGradeExecute() const;
		bool getSigned() const;
		void setSigned(bool signed_);
		void beSigned(Bureaucrat bureaucrat);
		Form	&operator = (const Form &copy);
		virtual void execute_sub_form(void) const = 0;
		void execute(Bureaucrat & executor) const;
	class GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char* what() const throw();
	};
	class NotSigned : public std::exception
	{
		const char* what() const throw();
	};

};

std::ostream & operator<<(std::ostream &out, const Form &c);

#endif