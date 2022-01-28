/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:37:44 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 13:21:50 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_H
# define CAT_CLASS_H

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal {
private:
	Brain	*_brain;
public:
	Cat();
	Cat(const Cat & src);
	~Cat();
	Cat	&operator=(const Cat & src);

	void	addidea(std::string idea);
	void	showideas() const;
	void	makeSound( void ) const;
};

#endif