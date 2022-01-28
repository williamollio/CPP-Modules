/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:42:56 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 13:21:54 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_H
# define DOG_CLASS_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal {
private:
	Brain	*_brain;
public:
	Dog();
	Dog(Dog & src);
	~Dog();
	Dog	&operator=(const Dog & src);

	void	addidea(std::string idea);
	void	showideas() const;
	void	makeSound( void ) const;
};

#endif