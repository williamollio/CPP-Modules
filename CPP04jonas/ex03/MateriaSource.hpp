/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:43:02 by wollio            #+#    #+#             */
/*   Updated: 2022/02/11 16:43:21 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		/*private members*/
	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(const MateriaSource &copy);

		MateriaSource	&operator = (const MateriaSource &copy);
};

#endif
