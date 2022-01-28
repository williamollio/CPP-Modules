/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:55:41 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 14:33:04 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_H
# define ICE_CLASS_H

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice( const Ice &src );
	~Ice();
	Ice	&operator=( const Ice &src );

	AMateria	*clone() const;
	void		use( ICharacter& target );
};

#endif