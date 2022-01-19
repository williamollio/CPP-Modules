/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:07:25 by wollio            #+#    #+#             */
/*   Updated: 2022/01/20 00:04:28 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point	A(0.0f, 0.0f);
	Point	B(0.0f, 10.0f);
	Point	C(9.0f, 5.0f);
	Point	P(3.5f, 4.220f);
	std::cout << bsp(A, B, C, P) << std::endl;
	if (bsp(A, B, C, P))
		std::cout << std::endl << "The P point is in the triangle ABC" << std::endl << std::endl;
	else
		std::cout << std::endl << "The P point isn't in the triangle ABC" << std::endl << std::endl;
	return (EXIT_SUCCESS);
}
