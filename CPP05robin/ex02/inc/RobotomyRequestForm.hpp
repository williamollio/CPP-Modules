/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radelwar <radelwar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 21:19:02 by radelwar          #+#    #+#             */
/*   Updated: 2022/01/05 21:19:44 by radelwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {
	private:
		std::string const target;

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const & ref);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void);

		RobotomyRequestForm &	operator = (RobotomyRequestForm const & ref);

		void	execute_inDerive(void) const;
};

#endif