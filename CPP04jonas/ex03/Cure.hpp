/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:32:09 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 14:32:42 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_H
# define CURE_CLASS_H

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure( const Cure &src );
	~Cure();
	Cure	&operator=( const Cure &src );
	
	AMateria	*clone() const;
	void		use( ICharacter& target );
};

#endif