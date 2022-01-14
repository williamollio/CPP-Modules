/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:22:13 by wollio            #+#    #+#             */
/*   Updated: 2022/01/14 10:59:29 by wiliamollio      ###   ########.fr       */
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
		std::string _s1;
		std::string _s2;
	public:
	Replace(void);
	~Replace(void);
	int	inputChecker(int argc);
	void setString(std::string argv2, std::string argv3);
	std::string replaceAllOccurrence(std::string contentFile);
};

#endif