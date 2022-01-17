/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:07:28 by wollio            #+#    #+#             */
/*   Updated: 2022/01/17 12:42:19 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

using namespace std;

class Fixed {

	private:
		static const int _bits = 8;
		int _fixed;

	public:
		Fixed(void);
		~Fixed(void);


};