/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:37:22 by wollio            #+#    #+#             */
/*   Updated: 2022/02/10 16:58:12 by wiliamollio      ###   ########.fr       */
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
		void addIdea(std::string idea);
		void displayIdea();
		Dog	&operator = (const Dog &copy);
};

#endif
