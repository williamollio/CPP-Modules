/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:51:25 by wollio            #+#    #+#             */
/*   Updated: 2022/02/15 19:12:59 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <cstring>
# include <exception>

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &copy);
		std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();

		Bureaucrat	&operator = (const Bureaucrat &copy);
	class GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char* what() const throw();
	};
};
std::ostream & operator<<(std::ostream &out, const Bureaucrat &c);

#endif
