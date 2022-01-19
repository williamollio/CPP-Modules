/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:16:56 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/01/20 00:05:09 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0), x1(0), y1(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float arg_x, const float arg_y) : x(arg_x), y(arg_y), x1(arg_x), y1(arg_y)
{
	std::cout << "Parameterized constructor called" << std::endl;
}

Point::Point(const Point &copy) : x1(copy.x1), y1(copy.y1)
{
	std::cout << "Copy constructor called" << std::endl;
}

Point::~Point(void)
{
	std::cout << "Destructor called" << std::endl;
}

Point	&Point::operator= (Point const &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->x1 = copy.x1;
	this->y1 = copy.y1;
	return *this;
}

float Point::getX(void) const
{
	return this->x1.toFloat();
}

float Point::getY(void) const
{
	return this->y1.toFloat();
}