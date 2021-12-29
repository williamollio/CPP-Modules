/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <williamollio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:18:44 by wollio            #+#    #+#             */
/*   Updated: 2021/12/29 16:26:17 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contacts::Contacts(void)
{
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
}

Contacts::~Contacts(void)
{
}

Phonebook::Phonebook(void)
{
}

Phonebook::~Phonebook(void)
{
}

void Contacts::add_contacts(void)
{
	std::cout << '\t' << "first name : ";
	getline(std::cin, this->_first_name);
	std::cout << '\t' << "last name : ";
	getline(std::cin, this->_last_name);
	std::cout << '\t' << "nickname : ";
	getline(std::cin, this->_nickname);
	std::cout << '\t' << "phone number : ";
	getline(std::cin, this->_phone_number);
	std::cout << '\t' << "darkest secret : ";
	getline(std::cin, this->_darkest_secret);
	return;
}

std::string Contacts::getFirst(void)
{
	return (this->_first_name);
}

std::string Contacts::getLast(void)
{
	return (this->_last_name);
}

std::string Contacts::getNick(void)
{
	return (this->_nickname);
}

std::string Contacts::getPhone(void)
{
	return (this->_phone_number);
}

void Phonebook::truncate(std::string first)
{
	char new_string[11];
	strncpy(new_string, first.c_str(), 9);
	new_string[9] = '.';
	new_string[10] = '\0';
	std::cout << new_string << '|';
}

void Phonebook::choose(int i)
{
	std::string index_temp;
	int x = 0;
	int index;

	std::cout << "Index of the desired entry : ";
	getline(std::cin, index_temp);
	index = atoi(index_temp.c_str());
	while (x < i)
	{
		if (x == index)
		{
			std::cout << '\t' << "First name : " << contact[index].getFirst() << std::endl;
			std::cout << '\t' << "Last name : " << contact[index].getLast() << std::endl;
			std::cout << '\t' << "Nickname : " << contact[index].getNick() << std::endl;
			std::cout << '\t' << "Phone number : " << contact[index].getPhone() << std::endl;
			return;
		}
		x++;
	}
	std::cout << "Index not existing" << std::endl;
	return;
}

void Phonebook::search_contacts(int i)
{
	int x = 0;

	while (x < i)
	{
		std::string first = contact[x].getFirst();
		std::string last = contact[x].getLast();
		std::string nick = contact[x].getNick();

		std::cout << std::right << std::setw(10) << std::to_string(x) << '|';
		if (first.length() > 10)
			truncate(first);
		else
			std::cout << std::right << std::setw(10) << first << '|';
		if (last.length() > 10)
			truncate(last);
		else
			std::cout << std::right << std::setw(10) << last << '|';
		if (last.length() > 10)
			truncate(nick);
		else
			std::cout << std::right << std::setw(10) << nick << '|';
		std::cout << std::endl;
		x++;
	}
	choose(i);
	return;
}
