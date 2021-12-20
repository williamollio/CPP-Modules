/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:15:19 by wollio            #+#    #+#             */
/*   Updated: 2021/12/20 21:09:40 by wollio           ###   ########.fr       */
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
				std::cout << "No available in the list" << std::endl;
			else
			{
				phonebook.search_contacts(i);
				std::cout << "SEARCH command has been hit" << std::endl;
			}
		}
		else if (command == "ADD")
		{
			phonebook.contact[i].add_contacts();
			std::cout << "ADD command has been hit" << std::endl;
			i++;
		}
		else if (command == "EXIT")
		{
			std::cout << "EXIT command has been hit" << std::endl;
			break;
		}
		if (i == 7)
			i = 0;
	}
	return 0;
}
