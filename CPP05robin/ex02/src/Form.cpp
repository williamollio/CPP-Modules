/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radelwar <radelwar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 13:27:26 by coder             #+#    #+#             */
/*   Updated: 2022/01/26 15:22:28 by radelwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

void	check_grade_form(int grade) {
	if (grade < 1)
		throw Form::GradeTooHighException();
	if (grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(void) : name("dummy"), sign(false),
					grade_req_sign(150), grade_req_exec(150) {}

Form::Form(Form const & ref) : name(ref.name), grade_req_sign(ref.grade_req_sign), grade_req_exec(ref.grade_req_exec) { *this = ref; }

Form::Form(std::string const & name, int grade_req_sign, int grade_req_exec) :
	name(name), sign(false), grade_req_sign(grade_req_sign), grade_req_exec(grade_req_exec) {
		check_grade_form(grade_req_sign);
		check_grade_form(grade_req_exec);
}

Form::~Form(void) {}

Form &	Form::operator = (Form const & ref) {
	sign = ref.sign;
	return *this;
}

std::string	Form::getName(void) const { return name; }
bool		Form::getSigned(void) const { return sign; }
int			Form::getGradReqSign(void) const { return grade_req_sign; }
int			Form::getGradeReqExec(void) const { return grade_req_exec; }

void	Form::setSigned(bool sign) { this->sign = sign; }

void	Form::beSigned(Bureaucrat & bureau) throw(std::exception){
	if (bureau.signForm(this) == true) {
		sign = true;
	}
	else {
		throw GradeTooLowException();
	}
}

void	Form::execute(Bureaucrat & bureau) const throw(std::exception) {
	if (bureau.getGrade() > getGradeReqExec())
		throw GradeTooLowException();
	if (getSigned() == false)
		throw NotSigned();
	bureau.executeForm(*this);
	this->execute_inDerive();
}

const char * Form::GradeTooHighException::what() const throw() {
	return ("Form: grade too high exception");
}
const char * Form::GradeTooLowException::what() const throw() {
	return ("Form: grade too low exception");
}

const char * Form::NotSigned::what() const throw() {
	return ("Form: not signed exception");
}

std::ostream &	operator << (std::ostream & out, Form const & ref) {
	out << "Form: " << ref.getName() << " needs grade " << ref.getGradeReqExec() << " for execution and grade "
			<< ref.getGradReqSign() << " for sign. It is signed: " << ref.getSigned();
	return (out);
}