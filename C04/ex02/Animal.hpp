/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:37:29 by wollio            #+#    #+#             */
/*   Updated: 2022/02/10 17:29:13 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <cstring>

# define PRINT(__msg) (std::cout << __msg << std::endl)

class Animal
{
	protected:
		std::string type;
	public:
		virtual void makeSound() const = 0;
		std::string getType() const;
		Animal(void);
		virtual ~Animal(void);
		Animal(const Animal &copy);

		Animal	&operator = (const Animal &copy);
};

#endif
