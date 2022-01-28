/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radelwar <radelwar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 21:17:43 by radelwar          #+#    #+#             */
/*   Updated: 2022/01/05 21:19:00 by radelwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form {
	private:
		std::string const target;

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const & ref);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm &	operator = (ShrubberyCreationForm const & ref);

		void	execute_inDerive(void) const;
};

#endif