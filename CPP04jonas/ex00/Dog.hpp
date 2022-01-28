/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:42:56 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/23 16:34:17 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_H
#define DOG_CLASS_H

#include "Animal.hpp"

class Dog: public Animal {
public:
	Dog();
	Dog( const Dog &src );
	Dog	&operator=( const Dog &src );
	~Dog();
	void	makeSound() const;
};

#endif