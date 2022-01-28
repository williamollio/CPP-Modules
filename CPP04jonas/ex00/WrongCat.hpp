/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:37:44 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/23 17:04:08 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_H
# define WRONGCAT_CLASS_H

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
public:
	WrongCat();
	WrongCat( const WrongCat &src);
	WrongCat	&operator=( const WrongCat &src);
	~WrongCat();
	void	makeSound() const;
};

#endif