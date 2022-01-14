/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:15:51 by wollio            #+#    #+#             */
/*   Updated: 2022/01/14 11:40:29 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

#include <iostream>
#include <string>

enum message {
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Karen {
	private :
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public :
		Karen(void);
		~Karen(void);
		void filter(std::string level);
		message hashit(std::string level);
};

#endif