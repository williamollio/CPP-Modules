/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:11:39 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/01/20 00:06:57 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef POINT_HPP
#define POINT_HPP

# include "Fixed.hpp"
class Point
{
	private:
		Fixed const x;
		Fixed const y;
		Fixed x1;
		Fixed y1;
	public:
		Point(void);
		Point(float arg_x, float arg_y);
		~Point(void);
		Point(const Point &copy);
		float getX(void) const;
		float getY(void) const;
		Point	&operator = (const Point &copy);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif