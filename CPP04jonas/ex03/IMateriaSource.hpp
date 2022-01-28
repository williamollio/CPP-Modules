/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:19:23 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/28 11:36:42 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_CLASS_H
# define IMATERIA_CLASS_H

#include <iostream>
#include "AMateria.hpp"

// Interface
class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif