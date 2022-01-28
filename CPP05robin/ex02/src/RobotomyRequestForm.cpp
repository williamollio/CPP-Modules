/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radelwar <radelwar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 21:19:52 by radelwar          #+#    #+#             */
/*   Updated: 2022/01/05 21:41:52 by radelwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RoboReqForm", 72, 45), target("default") { }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & ref) { *this = ref; }

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RoboReqForm", 72, 45), target(target) { }

RobotomyRequestForm::~RobotomyRequestForm(void) { }

RobotomyRequestForm &	RobotomyRequestForm::operator = (RobotomyRequestForm const & ref) {
	this->setSigned(ref.getSigned());
	return *this;
}

void	RobotomyRequestForm::execute_inDerive(void) const {
	static bool fifty = false;
	std::cout << "BRRRRRR BRRRRRRR BRRRRRRRR\n";
	if (fifty) {
		fifty = false;
		std::cout << target << " has been robotoptimized successfully\n";
	}
	else {
		fifty = true;
		std::cout << target << " robotoptimization failed\n";
	}
}