/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 18:32:04 by wollio            #+#    #+#             */
/*   Updated: 2022/03/20 19:56:02 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>

class NotFound : public std::exception
{
	virtual const char *what() const throw();
};

const char *NotFound::what() const throw()
{
	return ("Not Found");
}


template <typename T>
typename T::iterator easyfind(T t, int x)
{
	typename T::iterator i;
	i = find(t.begin(), t.end(), x);
	if (i != t.end())
		return (i);
	throw NotFound();

}
#endif