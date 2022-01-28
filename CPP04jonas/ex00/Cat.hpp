/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:37:44 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/23 16:41:53 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_H
# define CAT_CLASS_H

#include "Animal.hpp"

class Cat: public Animal {
public:
	Cat();
	Cat( const Cat &src );
	Cat	&operator=( const Cat &src );
	~Cat();
	void	makeSound() const;
};

#endif