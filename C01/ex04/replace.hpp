/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:22:13 by wollio            #+#    #+#             */
/*   Updated: 2022/01/13 19:22:41 by wiliamollio      ###   ########.fr       */
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
		std::fstream _file;
		std::string _s1;
		std::string _s2;
		std::stringstream _buffer;
	public:
	Replace(void);
	~Replace(void);
	int	inputChecker(int argc);
	int setInfile(std::string argv);
	void setString(std::string argv2, std::string argv3);
	void setBuffer(void);
	std::stringstream getBuffer(void);
	std::string replaceAllOccurrence(std::string contentFile);
	std::ofstream setOutfile(std::string argv);
};

#endif