/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:27:08 by wollio            #+#    #+#             */
/*   Updated: 2022/01/20 00:06:44 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* find the area of the triangle passed as argument */
float area(Point const &p1, Point const &p2, Point const &p3)
{
	float rt = (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
	return (rt / 2.0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float A1, A2, A3, TotalArea;

	TotalArea = area(point, a, b);
	A1 = area(point, a, b);
	A2 = area(point, b, c);
	A3 = area(point, c, a);

	/* if the sum of the 3 triangles if superior than the first.
	then the point is outside of the triangle*/
	if (A1 + A2 + A3 > TotalArea)
		return false;
	else
		return true;
}
