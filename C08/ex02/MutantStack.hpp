/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 23:22:48 by wollio            #+#    #+#             */
/*   Updated: 2022/03/20 23:55:22 by wollio           ###   ########.fr       */
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
	typedef std::stack<T> Stack;
	typedef typename Stack::container_type Container;
	typedef typename Container::iterator iterator;

	MutantStack(){};
	MutantStack(const Stack &copy) : Stack(copy){}
	Stack &operator=(const Stack &copy)
	{
		if (*this != copy)
			*this = copy;
		return (*this);
	}
	~MutantStack(){};

	iterator begin() {return (Stack::c.begin());}
	iterator end() {return (Stack::c.end());}
};

#endif