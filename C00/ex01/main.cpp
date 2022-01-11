/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiliamollio <wiliamollio@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:15:19 by wollio            #+#    #+#             */
/*   Updated: 2022/01/11 11:55:18 by wiliamollio      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	int i = 0;
	Phonebook phonebook;
	std::string command;
	while (1)
	{
		std::cout << "Enter a command : ";
		std::getline (std::cin, command);
		if (command == "SEARCH")
		{
			if (i == 0)
				std::cout << "List empty" << std::endl;
			else
				phonebook.search_contacts(i);
		}
		else if (command == "ADD")
		{
			phonebook.contact[i].add_contacts();
			i++;
		}
		else if (command == "EXIT")
			break;
		else
			std::cout << "Commands allowed : ADD, SEARCH and EXIT" << std::endl;
		if (i == 8)
		{
			i = 0;
			phonebook._flag = 1;
		}
	}
	return 0;
}
