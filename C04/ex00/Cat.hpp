/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:37:27 by wollio            #+#    #+#             */
/*   Updated: 2022/01/27 16:50:02 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	private:
		/*private members*/
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &copy);
		void makeSound() const;
		Cat	&operator = (const Cat &copy);
};

#endif