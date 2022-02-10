/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:37:27 by wollio            #+#    #+#             */
/*   Updated: 2022/02/10 16:20:21 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &copy);
		void makeSound() const;
		void addIdea(std::string idea);
		void displayIdea();
		Cat	&operator = (const Cat &copy);
};

#endif
