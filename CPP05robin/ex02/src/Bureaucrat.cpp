/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radelwar <radelwar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 13:48:24 by coder             #+#    #+#             */
/*   Updated: 2022/01/26 15:36:26 by radelwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

void	check_grade(int grade){
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(void) : name("dummy") {
	grade = 150;
}

Bureaucrat::Bureaucrat(Bureaucrat const & ref) { *this = ref; }

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {
	check_grade(grade);
}

Bureaucrat::~Bureaucrat (void) { }

Bureaucrat &	Bureaucrat::operator = (Bureaucrat const & ref) {
	grade = ref.getGrade();
	return *this;
}

std::string	Bureaucrat::getName(void) const {
	return name;
}

int	Bureaucrat::getGrade(void) const {
	return grade;
}

void	Bureaucrat::increment_grade(void) {
	grade--;
	check_grade(grade);
}

void	Bureaucrat::decrement_grade(void) {
	grade++;
	check_grade(grade);
}

bool	Bureaucrat::signForm(Form * form) {
	if (getGrade() <= form->getGradReqSign()) {
		std::cout << getName() << " signs " << form->getName() << std::endl;
		return true;
	}
	else {
		std::cout << getName() << " cannot sign " << form->getName() << " because his grade is too bad\n";
		return false;
	}
}

void	Bureaucrat::executeForm(Form const & form) {
	std::cout << getName() << " executed " << form.getName() << std::endl;
}

std::ostream &	operator << (std::ostream & out, Bureaucrat const & ref) {
	out << ref.getName() << ", bureaucrat grade " << ref.getGrade();
	return out;
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Buro: grade under 1");
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Buro: grade over 150");
}
