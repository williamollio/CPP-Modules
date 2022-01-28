/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radelwar <radelwar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 13:27:19 by coder             #+#    #+#             */
/*   Updated: 2022/01/05 15:11:39 by radelwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		std::string const	name;
		bool				sign;
		int const			grade_req_sign;
		int const			grade_req_exec;

	public:
		Form(void);
		Form(Form const & ref);
		Form(std::string const &name, int grade_req_sign, int grade_req_exec);
		~Form(void);

		Form &	operator = (Form const & ref);

		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getGradReqSign(void) const;
		int			getGradeReqExec(void) const;

		void	beSigned(Bureaucrat & bureau) throw(std::exception);

	public:
		class	GradeTooHighException : public std::exception {
			virtual const char *	what() const throw();
		};
		class	GradeTooLowException : public std::exception {
			virtual const char *	what() const throw();
		};
};

std::ostream &	operator << (std::ostream & out, Form const & ref);

#endif