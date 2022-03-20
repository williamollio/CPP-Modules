/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:59:26 by wollio            #+#    #+#             */
/*   Updated: 2022/03/20 20:07:11 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	private :
	unsigned int N;
	unsigned int N;

	public :
	Span(unsigned int n);
	void addNumber(int nbr);
	class TooMuch : public std::exception
	{
		virtual const char *what() const throw();
	};
};


#endif