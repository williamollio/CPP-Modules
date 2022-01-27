/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:37:29 by wollio            #+#    #+#             */
/*   Updated: 2022/01/27 10:56:18 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <cstring>

class Animal
{
	protected:
		std::string type;
		void makeSound();
		std::string getType();
	public:
		Animal(void);
		~Animal(void);
		Animal(const Animal &copy);

		Animal	&operator = (const Animal &copy);
};

#endif
