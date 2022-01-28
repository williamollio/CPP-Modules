/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:03:26 by jhagedor          #+#    #+#             */
/*   Updated: 2022/01/27 14:48:58 by jhagedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	_name;
	AMateria*	_inventory[4];
public:
	Character( std::string const name );
	Character( const Character &src );
	virtual ~Character();

	Character	&operator=( const Character &b );

	std::string const &		getName() const;
	virtual void	equip( AMateria* m );
	virtual void	unequip( int idx );
	virtual void	use( int idx, ICharacter& target );
};