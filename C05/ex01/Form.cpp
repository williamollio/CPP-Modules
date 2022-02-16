/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:52:37 by wollio            #+#    #+#             */
/*   Updated: 2022/02/16 17:08:59 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("unnamed"), _signed(false), _grade_sign(150), _grade_execute(150)
{
	std::cout << "Unnamed form has been created" << std::endl;
}

Form::Form(std::string name, const int grade_sign, const int grade_execute) : _name(name), _grade_sign(grade_sign), _grade_execute(grade_execute)
{
	_signed = false;
	if (_grade_sign > 150 || _grade_execute > 150)
		throw GradeTooLowException();
	else if (_grade_sign < 1 || _grade_execute < 1)
		throw GradeTooHighException();
	std::cout << "Form " << _name << " has been created" << std::endl;
}

Form::~Form(void)
{
}

Form::Form(const Form &copy) : _name(copy._name), _grade_sign(copy._grade_sign), _grade_execute(copy._grade_execute)
{
	*this = copy;
}

Form	&Form::operator = (const Form &copy)
{
	_signed = copy._signed;
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form : GradeTooHighException");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form : GradeTooLowException");
}

std::string Form::getName() const { return _name ;}
int Form::getGradeSign() const { return _grade_sign;}
int Form::getGradeExecute() const { return _grade_execute;}
bool Form::getSigned() const { return _signed;}

std::ostream &operator<<(std::ostream &out, const Form &c)
{
	out << "Form " << c.getName() << " needs the grade " << c.getGradeExecute() << " to execute and the grade " << c.getGradeSign() << " to be signed";
	if (c.getSigned() == true)
		std::cout << ". The form is signed" << std::endl;
	else
		std::cout << ". The form isn't signed" << std::endl;
	return out;
}

void Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= _grade_sign)
		_signed = true;
	else
		throw GradeTooLowException();
}