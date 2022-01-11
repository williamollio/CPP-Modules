/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wollio <williamollio@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:15:18 by wollio            #+#    #+#             */
/*   Updated: 2022/01/11 11:49:35 by wollio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include <iostream>
#include <iomanip>
#include <cstring>

class Contacts {

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;

	public:
		Contacts(void);
		~Contacts(void);
		void add_contacts();
		std::string getFirst(void);
		std::string getLast(void);
		std::string getNick(void);
		std::string getPhone(void);
};

class Phonebook {

	//private :
	public:
		int _flag;
		Contacts contact[8];
		Phonebook(void);
		~Phonebook(void);
		void search_contacts(int i);
		void truncate(std::string first);
		void choose(int i);
};

#endif


