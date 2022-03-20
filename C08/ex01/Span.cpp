/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:59:21 by wollio            #+#    #+#             */
/*   Updated: 2022/03/20 23:06:42 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : N(n) {}
void Span::addNumber(int nbr)
{
	counter++;
	if (counter > N)
		throw TooMuchNumberAdded();
	array.push_back(nbr);
}

void	Span::addNumber(int nbr, int max, int min)
{
	counter+= nbr;
	if (counter > N)
		throw TooMuchNumberAdded();
	int b;
	for (int i = 0; i < nbr; i++)
	{
		b = rand() % max + min;
		array.push_back(b);
	}
}


int Span::longestSpan()
{
	if (array.size() <= 1)
		throw SizeTooSmall();
	std::vector<int>::iterator max = max_element(array.begin(), array.end());
	std::vector<int>::iterator min = min_element(array.begin(), array.end());
	int distance = *max - *min;
	return distance;
}


int Span::shortestSpan()
{
	if (array.size() <= 1)
		throw SizeTooSmall();
	int min = INT_MAX;
	int diff = 0;
	std::vector<int>::iterator i1 = array.begin();
	std::vector<int>::iterator i2;
	while (i1 != array.end())
	{
		i2 = array.begin();
		while (i2 != array.end())
		{
			diff = abs(*i1 - *i2);
			if (min > diff && *i1 != *i2)
				min = diff;
			i2++;
		}
		i1++;
	}
	return (min);
}

const char *Span::TooMuchNumberAdded::what() const throw() {return ("TooMuchNumberAdded");}
const char *Span::SizeTooSmall::what() const throw() {return ("SizeTooSmall");}