/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:59:52 by wollio            #+#    #+#             */
/*   Updated: 2022/03/09 15:57:58 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <cstring>
# include <iostream>

#define PRINT(x) std::cout << #x;
#define PRINT_NL(x, y) std::cout << #x << #y << std::endl;

enum type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	MINUS_INFF,
	PLUS_INFF,
	PLUS_INF,
	MINUS_INF,
	NAN
};
class conversion
{
	private:
		std::string _input;
		type _type;
		char c;
		int i;
		float f;
		double d;

		void output_values(void);
	public:
		conversion(void);
		conversion(char *s);
		~conversion(void);
		conversion(const conversion &copy);
		conversion	&operator = (const conversion &copy);

		/* Main function */
		void convertissor(void) const;

		/* Look for input type */
		int ifChar();
		int ifInt();
		int ifFloat();
		int ifDouble();

		/* Do the conversions */
		void isChar();
		void isInt();
		void isFloat();
		void isDouble();

		/* Getters */
		char getChar(void) const;
		int getInt(void) const;
		float getFloat(void) const;
		double getDouble(void) const;
};

/* Mandatory */
std::ostream& operator<< (std::ostream& os, const conversion& convert);

#endif
