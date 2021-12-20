/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <wollio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:18:44 by wollio            #+#    #+#             */
/*   Updated: 2021/12/20 21:28:17 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contacts::Contacts(void)
{
	std::cout << "Constructor contact has been called" << std::endl;
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
}

Contacts::~Contacts(void)
{
	std::cout << "Destructor contact has been called" << std::endl;
}

Phonebook::Phonebook(void)
{
	std::cout << "Constructor phonebook has been called" << std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Destructor phonebook has been called" << std::endl;
}

void Contacts::add_contacts(void)
{
	std::cout << "first name : ";
	getline(std::cin, this->_first_name);
	std::cout << "last name : ";
	getline(std::cin, this->_last_name);
	std::cout << "nickname : ";
	getline(std::cin, this->_nickname);
	std::cout << "phone number : ";
	getline(std::cin, this->_phone_number);
	std::cout << "darkest secret : ";
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

void Phonebook::search_contacts(int i)
{
	int x = 0;

	while (x < i)
	{
		std::cout << "\t" << std::to_string(x) << '|';
		std::cout << "\t" << contact[x].getFirst() << '|';
		std::cout << "\t" << contact[x].getLast() << '|';
		std::cout << "\t" << contact[x].getNick() << '|';
		std::cout << "\t" << contact[x].getPhone() << '|';
		std::cout << std::endl;
		x++;
	}
	return;
}