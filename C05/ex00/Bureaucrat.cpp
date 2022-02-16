/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:51:23 by wollio            #+#    #+#             */
/*   Updated: 2022/02/16 12:03:16 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("unnamed"), _grade(150)
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << *this;
	if (_grade > 150)
		throw GradeTooLowException();
	else if (_grade < 1)
		throw GradeTooHighException();
	std::cout << "Parameterized constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name("copied")
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &copy)
{
	_grade = copy._grade;
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

std::string Bureaucrat::getName() const {return (_name);}
int Bureaucrat::getGrade() const {return (_grade);}
void Bureaucrat::increment() {_grade--;}
void Bureaucrat::decrement() {_grade++;}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &c)
{
	out << c.getName() << ", bureaucrat grade " << c.getGrade() << "." << std::endl;
	return out;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException");
}