/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:07:28 by wollio            #+#    #+#             */
/*   Updated: 2022/01/20 00:15:11 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

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