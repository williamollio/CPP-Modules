/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:16:13 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 14:40:36 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_CLASS_H
# define ICHARACTER_CLASS_H

#include <iostream>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const &	getName() const = 0;
	virtual void 				equip(AMateria* m) = 0;
	virtual void 				unequip(int idx) = 0;
	virtual void 				use(int idx, ICharacter& target) = 0;
};

#endif