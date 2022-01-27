/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:04:06 by wollio            #+#    #+#             */
/*   Updated: 2022/01/27 17:06:58 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		/*private members*/
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(const WrongCat &copy);
		void makeSound() const;
		WrongCat	&operator = (const WrongCat &copy);
};

#endif
