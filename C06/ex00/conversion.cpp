/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:59:56 by wollio            #+#    #+#             */
/*   Updated: 2022/03/15 11:19:34 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

conversion::conversion(void)
{
	_type = (type)INT32_MAX;
	_input = "";
	c = 'c';
	i = 0;
	d = (double) 0;
	f = (float) 0;
}
conversion::conversion(char *s)
{
	_type = (type)INT32_MAX;
	_input = s;
	c = 'c';
	i = 0;
	d = (double) 0;
	f = (float) 0;

	_char = "";
	_int = "";
	_float = "";
	_double = "";
}
conversion::conversion(const conversion &copy) { *this = copy; }
conversion::~conversion(void) {}

conversion	&conversion::operator = (const conversion &copy)
{
	_type = copy._type;
	_input = copy._input;
	return (*this);
}

std::string conversion::getChar(void) const{return _char;}
std::string conversion::getInt(void) const{return _int;}
std::string conversion::getFloat(void) const{return _float;}
std::string conversion::getDouble(void) const{return _double;}

void conversion::isInt (void)
{
	__int = std::stoi(_input);
	if (__int >= 32 && __int < 127)
		_char = __int;
	else
		_char = "Non displayable";
	__float = std::stof(_input);
	__double = std::stod(_input);
}

void conversion::isFloat (void)
{
	_char = "Non displayable";
	__int = std::stoi(_input);
	__float = std::stof(_input);
	__double = std::stod(_input);
}
void conversion::isDouble (void)
{
	_char = "Non displayable";
	__int = std::stoi(_input);
	__float = std::stof(_input);
	__double = std::stod(_input);
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
		_type = NOT_VALID;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int conversion::check_int()
{
	char s[_input.length() + 1];
	strcpy(s, _input.c_str());
	for (size_t i = 0; i < _input.length(); i++)
		if (!isdigit(s[i]) && s[i] != '-')
			return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

int conversion::ifInt (void)
{
	if (check_dot())
		return (EXIT_FAILURE);
	else if (check_int())
		return (EXIT_FAILURE);
	_type = INT;
	return (EXIT_SUCCESS);
}

int conversion::ifFloat (void)
{
	char s[_input.length() + 1];
	strcpy(s, _input.c_str());
	for (size_t i = 0; i < _input.length(); i++)
		if (!isdigit(s[i]) && s[i] != '-' && s[i] != '.' && (s[i] != 'f' || i == 0))
			return (EXIT_FAILURE);
	_type = FLOAT;
	return (EXIT_SUCCESS);
}

int conversion::ifDouble (void)
{
	char s[_input.length() + 1];
	strcpy(s, _input.c_str());
	for (size_t i = 0; i < _input.length(); i++)
		if (!isdigit(s[i]) && s[i] != '-' && s[i] != '.')
			return (EXIT_FAILURE);
	_type = DOUBLE;
	return (EXIT_SUCCESS);
}

int conversion::convertissor(void)
{
	if (ifSpecial() || ifChar() || check_overflow())
		return (EXIT_FAILURE);
	if (!ifInt())
		isInt();
	else if (!ifDouble())
		isDouble();
	else if (!ifFloat())
		isFloat();
	else
		_type = CHAR;
	return (EXIT_SUCCESS);
}

void conversion::ifValid(void)
{
	if (_input.length() == 1)
	{
		char a[1];
		strcpy(a, _input.c_str());
		_char = a;
		__int = static_cast<int>(a[0]);
		__float = static_cast<float>(a[0]);
		__double = static_cast<double>(a[0]);
		return;
	}
	_type = NOT_VALID;
	return ;
}

void conversion::main(void)
{
	if (convertissor() && this->_type != CHAR && isSpecial())
		return ;
	if (this->_type == CHAR)
		ifValid();
}

type conversion::getType(void) const {return _type;}
int conversion::get_int(void) const {return __int;}
double conversion::get_double(void) const {return __float;}
float conversion::get_float(void) const {return __double;}
std::ostream& operator<< (std::ostream& os, conversion& convert)
{
	convert.main();
	/* Display when special cases*/
	if (convert.getType() <= NAN)
	{
		os << "char : " << convert.getChar() << std::endl
		<< "int : " << convert.getInt() << std::endl
		<< "float : " << convert.getFloat() << std::endl
		<< "double : " << convert.getDouble() << std::endl;
	}
	/* Display for different types */
	else if (convert.getType() == INT)
	{
		os << "char : " << convert.getChar() << std::endl
		<< "int : " << convert.get_int() << std::endl
		<< "float : " << convert.get_float() << ".0f" << std::endl
		<< "double : " << convert.get_double() << ".0" << std::endl;
	}
	else if (convert.getType() == FLOAT)
	{
		os << "char : " << convert.getChar() << std::endl
		<< "int : " << convert.get_int() << std::endl
		<< "float : " << convert.get_float() << "f" << std::endl
		<< "double : " << convert.get_double() << std::endl;
	}
	else if (convert.getType() == DOUBLE)
	{
		os << "char : " << convert.getChar() << std::endl
		<< "int : " << convert.get_int() << std::endl
		<< "float : " << convert.get_float() << "f" << std::endl
		<< "double : " << convert.get_double() << std::endl;
	}
	else if (convert.getType() == CHAR)
	{
		os << "char : " << convert.getChar() << std::endl
		<< "int : " << convert.get_int() << std::endl
		<< "float : " << convert.get_float() << "f" << std::endl
		<< "double : " << convert.get_double() << std::endl;
	}
	else if (convert.getType() == NOT_VALID)
	{
		os << "the input isn't correct " << std::endl;
	}
	return (os);
}