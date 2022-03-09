/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:59:56 by wollio            #+#    #+#             */
/*   Updated: 2022/03/09 15:57:54 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

conversion::conversion(void) : _type(NAN), _input("") {}
conversion::conversion(char *s) : _type(NAN), _input(s)
{
	c = 'c';
	i = 0;
	d = (double) 0;
	f = (float) 0;
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
	PRINT_NL(char :, c);
	PRINT_NL(int :, i);
	PRINT_NL(float :, f);
	PRINT_NL(double :, d);
}

char conversion::getChar(void) const{return c;}
int conversion::getInt(void) const{return i;}
float conversion::getFloat(void) const{return f;}
double conversion::getDouble(void) const{return d;}


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


int conversion::ifChar (void)
{

}
int conversion::ifInt (void)
{

}
int conversion::ifFloat (void)
{

}
int conversion::ifDouble (void)
{

}
void conversion::convertissor(void) const
{
	if (ifInt())
		isInt();
}
std::ostream& operator<< (std::ostream& os, const conversion& convert)
{
	convert.convertissor();
	os << "char : " << convert.getChar() << std::endl
	<< "int : " << convert.getInt() << std::endl
	<< "float : " << convert.getFloat() << std::endl
	<< "double : " << convert.getDouble() << std::endl;
}