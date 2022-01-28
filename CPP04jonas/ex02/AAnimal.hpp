/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:25:22 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 10:47:47 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_CLASS_H
# define AANIMAL_CLASS_H

# include <iostream>

// abstract class
class AAnimal {
protected:
	std::string	_type;
public:
	AAnimal();
	AAnimal(const AAnimal & src);
	virtual ~AAnimal();
	AAnimal &operator=(const AAnimal & src);

	virtual void		makeSound() const = 0;
	std::string	getType() const;
};

#endif


