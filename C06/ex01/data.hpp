/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:32:08 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/03/14 20:31:40 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class Data
{
	private:
		std::string _str;
	public:
	Data(void);
	~Data(void);
	std::string getStr();
	void setStr(std::string str);
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
