/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:43:44 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/03/10 15:44:31 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

int conversion::isSpecial()
{
	if (_type == MINUS_INFF || _type == MINUS_INF)
	{
		_char = "impossible";
		_int = "impossible";
		_float = "-inff";
		_double = "-inf";
		return (EXIT_FAILURE);
	}
	else if (_type == PLUS_INFF || _type == PLUS_INF)
	{
		_char = "impossible";
		_int = "impossible";
		_float = "+inff";
		_double = "+inf";
		return (EXIT_FAILURE);
	}
	else if (_type == NANF || _type == NAN)
	{
		_char = "impossible";
		_int = "impossible";
		_float = "nanf";
		_double = "nan";
		return (EXIT_FAILURE);
	}
	else
		return (EXIT_SUCCESS);
}