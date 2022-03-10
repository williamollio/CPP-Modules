/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:59:56 by wollio            #+#    #+#             */
/*   Updated: 2022/03/10 15:44:50 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

conversion::conversion(void)
{
	_type = (type)INT32_MAX;
	_input = "";
	_overflow = false;
	c = 'c';
	i = 0;
	d = (double) 0;
	f = (float) 0;
}
conversion::conversion(char *s)
{
	_type = (type)INT32_MAX;
	_input = s;
	_overflow = false;
	c = 'c';
	i = 0;
	d = (double) 0;
	f = (float) 0;

	_char = "not done yet";
	_int = "not done yet";
	_float = "not done yet";
	_double = "not done yet";
}
conversion::conversion(const conversion &copy) { *this = copy; }
conversion::~conversion(void) {}

conversion	&conversion::operator = (const conversion &copy)
{
	_type = copy._type;
	_input = copy._input;
	return (*this);
}

/* Not tested */
void conversion::output_values(void)
{
}

std::string conversion::getChar(void) const{return _char;}
std::string conversion::getInt(void) const{return _int;}
std::string conversion::getFloat(void) const{return _float;}
std::string conversion::getDouble(void) const{return _double;}


void conversion::isChar (void)
{

}
void conversion::isInt (void)
{

}
void conversion::isFloat (void)
{

}
void conversion::isDouble (void)
{

}

int conversion::check_dot()
{
	size_t count;
	count = _input.find('.');
	if (count != std::string::npos)
	{
		_dot = true;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int conversion::check_overflow()
{
	std::stringstream ss;
	long nbr;

	ss << _input;
	ss >> nbr;
	if (nbr > INT32_MAX || nbr < INT32_MIN)
	{
		_overflow = true;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int conversion::ifInt (void)
{
	if (check_dot() || check_overflow())
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);

}

int conversion::ifChar (void)
{
	return (EXIT_SUCCESS);
}
int conversion::ifFloat (void)
{
	return (EXIT_SUCCESS);

}
int conversion::ifDouble (void)
{
	return (EXIT_SUCCESS);

}
int conversion:: check_is_valid()
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

int conversion::convertissor(void)
{
	if (ifSpecial() || check_is_valid())
		return (EXIT_FAILURE);
	if (ifInt())
		isInt();
	return (EXIT_SUCCESS);
}

void conversion::main(void)
{
	if (convertissor() && this->_type != NOT_VALID && isSpecial())
		return ;

}

std::ostream& operator<< (std::ostream& os, conversion& convert)
{
	convert.main();
	os << "char : " << convert.getChar() << std::endl
	<< "int : " << convert.getInt() << std::endl
	<< "float : " << convert.getFloat() << std::endl
	<< "double : " << convert.getDouble() << std::endl;

	return (os);
}