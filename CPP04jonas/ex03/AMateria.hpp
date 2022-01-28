/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:12:14 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 14:42:37 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_H
# define AMATERIA_CLASS_H

# include "ICharacter.hpp"
# include <iostream>
# include <string>

class ICharacter;

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria();
	AMateria(std::string const & _type);
	AMateria( const AMateria & src );
	virtual ~AMateria();
	AMateria &operator=	( const AMateria & src);

	std::string const		&getType() const;  // Returns the materia type
	virtual AMateria*		clone() const = 0;
	virtual void 			use( ICharacter& target );
};

#endif