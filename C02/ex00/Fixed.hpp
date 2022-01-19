/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:07:28 by wollio            #+#    #+#             */
/*   Updated: 2022/01/18 13:01:25 by wollio           ###   ########.fr       */
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
		Fixed (const Fixed &fixed);
		int getRawBits (void) const;
		void setRawBits (int const raw);
		Fixed& operator= (const Fixed& fixed);
};