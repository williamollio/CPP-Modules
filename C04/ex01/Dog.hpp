/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:37:22 by wollio            #+#    #+#             */
/*   Updated: 2022/01/27 17:49:17 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &copy);
		void makeSound() const;
		Dog	&operator = (const Dog &copy);
};

#endif
