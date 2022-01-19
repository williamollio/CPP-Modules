/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:07:25 by wollio            #+#    #+#             */
/*   Updated: 2022/01/19 17:20:51 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	Fixed aX(1);
	Fixed aY(2);

	Fixed bX(5);
	Fixed bY(7);

	Fixed cX(10);
	Fixed cY(15);

	Fixed pX(3);
	Fixed pY(4);

	Point A(aX, aY);
	Point B(bX, bY);
	Point C(cX, cY);
	Point P(pX, pY);

	return 0;
}
