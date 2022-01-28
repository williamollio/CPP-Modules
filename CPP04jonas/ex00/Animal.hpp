/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:25:22 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/28 11:11:30 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_H
# define ANIMAL_CLASS_H

# include <iostream>

class Animal {
	protected:
		std::string	_type;
	public:
		Animal();
		Animal( Animal const &src );
		Animal	&operator=( Animal const &src );
		virtual ~Animal(); //
		virtual void		makeSound() const;
		std::string	getType() const;
};

#endif


