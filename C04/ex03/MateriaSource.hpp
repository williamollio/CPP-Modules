/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 20:02:40 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/02/11 20:14:14 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "Cure.hpp"
# include "Ice.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materia_src[3];
	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(const MateriaSource &copy);
		MateriaSource	&operator = (const MateriaSource &copy);
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};

#endif
