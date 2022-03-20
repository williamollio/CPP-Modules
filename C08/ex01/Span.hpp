/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:59:26 by wollio            #+#    #+#             */
/*   Updated: 2022/03/20 21:34:07 by wiliamollio      ###   ########.fr       */
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
	unsigned int counter;
	std::vector<int> array;

	public :
	Span(unsigned int n);
	void addNumber(int nbr);
	int shortestSpan(int nbr);
	int longestSpan(int nbr);
	int ft_begin();
	int ft_end();
	class TooMuch : public std::exception
	{
		virtual const char *what() const throw();
	};
	class NotFound : public std::exception
	{
		virtual const char *what() const throw();
	};
};


#endif