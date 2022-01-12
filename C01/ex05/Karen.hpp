/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:15:51 by wollio            #+#    #+#             */
/*   Updated: 2022/01/12 15:36:57 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

#include <iostream>
#include <string>
class Karen {
	private :
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public :
		void complain (std::string level);
		Karen(void);
		~Karen(void);
};

#endif