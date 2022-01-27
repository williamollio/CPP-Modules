/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:04:09 by wollio            #+#    #+#             */
/*   Updated: 2022/01/27 17:13:24 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <cstring>
class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		~WrongAnimal(void);
		WrongAnimal(const WrongAnimal &copy);
		std::string getType() const;
		void makeSound() const;
		WrongAnimal	&operator = (const WrongAnimal &copy);
};

#endif
