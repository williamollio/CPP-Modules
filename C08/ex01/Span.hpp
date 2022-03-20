/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:59:26 by wollio            #+#    #+#             */
/*   Updated: 2022/03/20 22:56:17 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private :
	unsigned int N;
	unsigned int counter;
	std::vector<int> array;

	public :
	Span(unsigned int n);
	void addNumber(int nbr);
	void addNumber(int nbr, int max, int min);
	int shortestSpan();
	int longestSpan();
	class TooMuchNumberAdded : public std::exception
	{
		virtual const char *what() const throw();
	};
	class SizeTooSmall : public std::exception
	{
		virtual const char *what() const throw();
	};
};


#endif