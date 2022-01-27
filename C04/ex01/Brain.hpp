/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:46:14 by wollio            #+#    #+#             */
/*   Updated: 2022/01/27 17:48:34 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain &copy);

		Brain	&operator = (const Brain &copy);
};

#endif
