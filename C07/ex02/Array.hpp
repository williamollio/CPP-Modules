/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 22:06:16 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/03/19 22:10:16 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#define P(x) std::cout << #x << std::endl;

#include <iostream>

template <typename T>
class Array {
	private :
		T *array;
		unsigned int sizeArray;
		int cop;

	public:
	void setArray(T value, unsigned int index) {this->array[index] = value;}
	unsigned int size(void) const {return (sizeArray);}
	T getValueArray(unsigned int index) {return (array[index]);}

	Array(void)
	{
		cop = 0;
		array = new T[0];
	}
	~Array() { delete [] this->array; }
	Array(unsigned int n) : sizeArray(n)
	{
		cop = 0;
		array = new T[sizeArray];
	}

	Array(const Array &value)
	{
		cop = 1;
		*this = value;
	}

	Array& operator=(Array const & value)
	{
		if (cop != 1)
			delete this->array;
		this->sizeArray = value.sizeArray;
		this->array = new T[sizeArray];
		for (unsigned int i = 0; i < sizeArray; i++)
			(this->array)[i] = (value.array)[i];
		return *this;
	}

	/* Subscript operator */
	T& operator[](unsigned int index)
	{
		if (index >= sizeArray || index < 0)
			throw OutOfBounds();
		return array[index];
	}
	class OutOfBounds : public std::exception
	{
		public:
			virtual const char* what() const throw() {
				return "OutOfBoundsError";
			}
	};
};

#endif