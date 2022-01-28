/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 13:41:40 by coder             #+#    #+#             */
/*   Updated: 2021/12/31 13:30:43 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <stdexcept>

class Bureaucrat {
	private:
		std::string const	name;
		int		grade;

	public:
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const & ref);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);

		Bureaucrat &	operator = (Bureaucrat const & ref);


		std::string	getName(void) const;
		int			getGrade(void) const;

		void	increment_grade(void);
		void	decrement_grade(void);

	public:
		class GradeTooHighException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
};

std::ostream &		operator << (std::ostream & out, Bureaucrat const & ref);

#endif