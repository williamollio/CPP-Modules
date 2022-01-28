/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:37:44 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 11:36:54 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_H
# define CAT_CLASS_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {
private:
	Brain	*_brain;
public:
	Cat();
	Cat(const Cat & src);
	~Cat();
	Cat	&operator=(const Cat & src);

	void	addidea(std::string idea);
	void	showideas() const;
};

#endif