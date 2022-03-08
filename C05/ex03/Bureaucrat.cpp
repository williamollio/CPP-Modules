/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:51:23 by wollio            #+#    #+#             */
/*   Updated: 2022/03/08 20:40:42 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("unnamed"), _grade(150)
{
	std::cout << "Unnamed Bureaucrated has been created" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (_grade > 150)
		throw GradeTooLowException();
	else if (_grade < 1)
		throw GradeTooHighException();
	std::cout << "Bureaucrate " << _name << " has been created" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name("copied")
{
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &copy)
{
	_grade = copy._grade;
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

void Bureaucrat::executeForm(Form const & form)
{
	std::cout << getName() << " execute " << form.getName() << std::endl;
	form.execute_sub_form();
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getSigned() == true)
		std::cout << getName() << "signed " << form.getGradeSign() <<  std::endl;
	else
		std::cout << getName() << "couldn’t sign " << form.getGradeSign() << "because he is lazy" << std::endl;
	return ;
}