/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <williamollio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:15:19 by wollio            #+#    #+#             */
/*   Updated: 2021/12/18 11:19:54 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

int main(void){

	// instance variable
	// a stack variable
	Sample instance;

	instance.bar();
	instance.foo = 42;
	std::cout << "instance.foo " << instance.foo << std::endl;
	// at the end the variable created by the instance are destroyed
	return 0;
}
