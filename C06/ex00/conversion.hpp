/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:59:52 by wollio            #+#    #+#             */
/*   Updated: 2022/03/10 15:46:15 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <cstring>
# include <sstream>
# include <limits.h>
# include <ctype.h>

#define PRINT(x) std::cout << #x;
#define PRINT_NL(x) std::cout << #x << std::endl;

enum type
{
	MINUS_INFF,
	PLUS_INFF,
	NANF,
	MINUS_INF,
	PLUS_INF,
	NAN,
	INT,
	CHAR,
	FLOAT,
	DOUBLE,
	NOT_VALID
};
class conversion
{
	private:
		type _type;
		std::string _input;
		bool _overflow;
		bool _dot;
		std::string c;
		int i;
		float f;
		double d;

		/* Results */
		std::string _char;
		std::string _int;
		std::string _float;
		std::string _double;

		void output_values(void);

	public:
		conversion(void);
		conversion(char *s);
		~conversion(void);
		conversion(const conversion &copy);
		conversion	&operator = (const conversion &copy);

		/* Main function */
		void main(void);
		int convertissor(void);

		/* Look for input type */
		int ifChar();
		int ifInt();
		int ifFloat();
		int ifDouble();
		int ifSpecial();

		/* Do the conversions */
		void isChar();
		void isInt();
		void isFloat();
		void isDouble();
		int isSpecial();

		/* Tools */
		int check_is_valid();
		static type hashit(std::string input);
		int check_dot();
		int check_overflow();

		/* Getters */
		std::string getChar(void) const;
		std::string getInt(void) const;
		std::string getFloat(void) const;
		std::string getDouble(void) const;
};

/* Mandatory */
std::ostream& operator<< (std::ostream& os, conversion& convert);

#endif
