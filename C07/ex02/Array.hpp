/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 22:06:16 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/03/19 16:50:06 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	private :
		T *array;
		unsigned int size;

	public:
	void setArray(T value, unsigned int index) {this->array[index] = value;}
	unsigned int getSize(void) const {return (size);}
	T getValueArray(unsigned int index) {return (array[index]);}

	Array(void)
	{
		array = new T[0];
		std::cout << "Default constructor called" << std::endl;
	}

	Array(unsigned int n) : size(n)
	{
		array = new T[size];
		std::cout << "Parameterized constructor called" << std::endl;
	}

	Array(const Array &value)
	{
		*this = value;
		std::cout << "Copy constructor" << std::endl;
	}

	Array& operator=(Array const & value)
	{
		if (this->array)
			delete this->array;
		this->size = value.size;
		this->array = new T[size];
		for (unsigned int i = 0; i < size; i++)
			(this->array)[i] = (value.array)[i];
		std::cout << "Assignment operator called " << std::endl;
		return *this;
	}
};

/* ?? */
template <typename T>
std::ostream	&operator<<( std::ostream &o, const Array<T> &array )
{
	for (unsigned int i = 0; i < array.getSize(); i++)
		o << array[i] << std::endl;
	return o;
}

#endif