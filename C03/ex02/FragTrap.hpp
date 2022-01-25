/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:41:02 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/01/25 19:57:07 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		/*private members*/
	public:
		FragTrap(void);
		FragTrap(string name);
		~FragTrap(void);
		FragTrap(const FragTrap &copy);
		FragTrap	&operator = (const FragTrap &copy);
		void highFivesGuys(void);
};

#endif
