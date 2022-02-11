/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:35:54 by wollio            #+#    #+#             */
/*   Updated: 2022/02/11 16:37:53 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	private:
		/*private members*/
	public:
		Cure(void);
		~Cure(void);
		Cure(const Cure &copy);
		AMateria* clone();
		Cure	&operator = (const Cure &copy);
		void use(ICharacter &target);
};

#endif
