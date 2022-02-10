/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:46:14 by wollio            #+#    #+#             */
/*   Updated: 2022/02/10 16:15:33 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "Animal.hpp"

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain &copy);
		void addIdea(std::string idea);
		void displayIdea();
		Brain	&operator = (const Brain &copy);
};

#endif
