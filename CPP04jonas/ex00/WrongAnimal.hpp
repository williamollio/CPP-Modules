/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:25:22 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/23 17:00:13 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_H
# define WRONGANIMAL_CLASS_H

# include <iostream>

class WrongAnimal {
protected:
	std::string	_type;
public:
	WrongAnimal();
	WrongAnimal( const WrongAnimal &src );
	WrongAnimal &operator=( const WrongAnimal &src );
	virtual ~WrongAnimal();
	void		makeSound() const;
	std::string	getType() const;
};

#endif


