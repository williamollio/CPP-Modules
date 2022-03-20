/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:59:21 by wollio            #+#    #+#             */
/*   Updated: 2022/03/20 21:41:12 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : N(n) {}
void Span::addNumber(int nbr)
{
	counter++;
	if (counter >= N)
		throw TooMuch();
	std::cout << N << std::endl;
	array.push_back(nbr);
}

int Span::ft_begin()
{
	std::vector<int>::iterator begin = array.begin();
	std::vector<int>::iterator end = array.end();
	int Int = 0;
	while (begin++ != end)
		Int++;
	return (Int);
}

int Span::ft_end()
{
	std::vector<int>::iterator begin = array.begin();
	std::vector<int>::iterator end = array.end();
	int Int = 0;
	while (begin != end--)
		Int++;
	return (Int);

}

int Span::shortestSpan(int nbr)
{

	int begin = ft_begin();
	int end = ft_end();
	if (begin < end)
		return (begin);
	return (end);
}

int Span::longestSpan(int nbr)
{
	int begin = ft_begin();
	int end = ft_end();
	if (begin > end)
		return (begin);
	return (end);
}

const char *Span::TooMuch::what() const throw() {return ("NotFound");}