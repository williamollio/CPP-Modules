/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:37:27 by wollio            #+#    #+#             */
/*   Updated: 2022/01/27 10:55:50 by wollio           ###   ########.fr       */
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

		Cat	&operator = (const Cat &copy);
};

#endif
