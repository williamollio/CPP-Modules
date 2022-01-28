/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:18:17 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 15:54:52 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource 
{
	private:
		AMateria*	_inventory[4];

	public:
		MateriaSource();
		MateriaSource( MateriaSource const & b );
		~MateriaSource();

		MateriaSource	&operator=( MateriaSource const & b );

		void		learnMateria( AMateria* );
		AMateria*	createMateria( std::string const & type );
};