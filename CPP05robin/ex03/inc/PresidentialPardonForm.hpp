/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radelwar <radelwar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:53:26 by radelwar          #+#    #+#             */
/*   Updated: 2022/01/05 21:00:56 by radelwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
		std::string const target;

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const & ref);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm(void);

		PresidentialPardonForm &	operator = (PresidentialPardonForm const & ref);

		void	execute_inDerive(void) const;
};

#endif