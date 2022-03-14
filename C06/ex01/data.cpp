/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:32:00 by wiliamollio       #+#    #+#             */
/*   Updated: 2022/03/14 20:45:47 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

Data::Data(void){ _str = "";}
Data::~Data(void){}
std::string Data::getStr(){return (_str);}
void Data::setStr(std::string str){_str = str;}

uintptr_t serialize(Data* ptr)
{
	uintptr_t rt;
	rt = reinterpret_cast<uintptr_t>(ptr);
	return (rt);
}

Data* deserialize(uintptr_t raw)
{
	Data* rt;
	rt = reinterpret_cast<Data *>(raw);
	return (rt);
}