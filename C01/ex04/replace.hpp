/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:22:13 by wollio            #+#    #+#             */
/*   Updated: 2022/01/12 16:43:37 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
# define REPLACE_H

#include <iostream>
#include <string.h>
#include <cstring>
#include <fstream>
#include <sstream>

class Replace {
	private:

	public:
	Replace(void);
	~Replace(void);
	int	inputChecker(int argc);
};

#endif