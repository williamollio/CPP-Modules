/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:43:29 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/03/12 18:31:07 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"


int conversion::ifValid()
{
	char s[_input.length() + 1];
	strcpy(s, _input.c_str());
	for (size_t i = 0; i < _input.length(); i++)
	{
		if (!isdigit(s[i]) && s[i] != '.' && s[i] != '-')
		{
			_type = NOT_VALID;
			return (EXIT_FAILURE);
		}
	}
	return (EXIT_SUCCESS);
}

type conversion::hashit(std::string input)
{
	std::string array[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	for (int i = 0; i < 6 ; i++)
		if (input == array[i])
			return ((type) i);
	return ((type)-1);
}

int conversion::ifSpecial()
{
	switch(hashit(_input))
	{
		case MINUS_INFF :
			_type = MINUS_INFF;
			return (EXIT_FAILURE);
		case PLUS_INFF :
			_type = PLUS_INFF;
			return (EXIT_FAILURE);
		case NANF :
			_type = NANF;
			return (EXIT_FAILURE);
		case PLUS_INF :
			_type = PLUS_INF;
			return (EXIT_FAILURE);
		case MINUS_INF :
			_type = MINUS_INF;
			return (EXIT_FAILURE);
		case NAN :
			_type = NAN;
			return (EXIT_FAILURE);
		default :
			return (EXIT_SUCCESS);
	}
}