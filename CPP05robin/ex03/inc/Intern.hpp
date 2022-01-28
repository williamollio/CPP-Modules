/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radelwar <radelwar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 22:08:42 by radelwar          #+#    #+#             */
/*   Updated: 2022/01/05 22:11:47 by radelwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"

class Intern {
	public:
		Intern(void);
		Intern(Intern const & ref);
		~Intern(void);

		Intern & operator = (Intern const & ref);

		Form *	makeForm(std::string form_name, std::string target);
};

#endif