/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:34:41 by wollio            #+#    #+#             */
/*   Updated: 2022/02/11 15:55:38 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria
{
	protected:
	// some things
	public:
		AMateria(void);
		~AMateria(void);
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		//virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		AMateria	&operator = (const AMateria &copy);
		AMateria(const AMateria &copy);
};

#endif
