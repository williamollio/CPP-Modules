/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:30:12 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/03/14 20:58:19 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

int main(void)
{
	Data *test = new Data();
	test->setStr("blabla");
	std::cout << "String : " << test->getStr() << std::endl;

	uintptr_t rt = serialize(test);
	std::cout << "After serialize : " << rt << std::endl;

	Data *rt2 = deserialize(rt);
	std::cout << "After deserialize : " << rt2 << std::endl;
	return (EXIT_SUCCESS);
}