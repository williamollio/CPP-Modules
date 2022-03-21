/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:22:48 by wollio            #+#    #+#             */
/*   Updated: 2022/03/21 15:01:05 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<class T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack(){};
	MutantStack(const MutantStack &copy) : MutantStack(copy){}
	MutantStack &operator=(const MutantStack &copy)
	{
		if (*this != copy)
			*this = copy;
		return (*this);
	}
	~MutantStack(){};

	iterator begin() {return (MutantStack::c.begin());}
	iterator end() {return (MutantStack::c.end());}
};

#endif