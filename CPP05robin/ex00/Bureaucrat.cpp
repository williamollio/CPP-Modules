/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 13:48:24 by coder             #+#    #+#             */
/*   Updated: 2021/12/31 13:18:10 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

std::ostream &	operator << (std::ostream & out, Bureaucrat const & ref) {
	out << ref.getName() << ", bureaucrat grade " << ref.getGrade();
	return out;
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return ("grade under 1");
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return ("grade over 150");
}
