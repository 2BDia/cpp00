/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:56:01 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/11/29 15:00:14 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	std::cout << "Constructor called" << std::endl;
	this->_index = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Phonebook::add(Phonebook *phonebook)
{
	std::string	input;

	std::cout << std::endl << "First name :" << std::endl;
	std::cout << "+ ";
	std::getline(std::cin, input);
	phonebook->_contacts[this->_index].set_first_name(input);
	std::cout << "Last name :" << std::endl;
	std::cout << "+ ";
	std::getline(std::cin, input);
	phonebook->_contacts[this->_index].set_last_name(input);
	std::cout << "Nickname :" << std::endl;
	std::cout << "+ ";
	std::getline(std::cin, input);
	phonebook->_contacts[this->_index].set_nickname(input);
	std::cout << "Phone number :" << std::endl;
	std::cout << "+ ";
	std::getline(std::cin, input);
	phonebook->_contacts[this->_index].set_phone_number(input);
	std::cout << "Darkest secret :" << std::endl;
	std::cout << "+ ";
	std::getline(std::cin, input);
	std::cout << "Contact added" << std::endl << std::endl;
	phonebook->_contacts[this->_index].set_darkest_secret(input);
	this->_index++;
}

void	Phonebook::get_all(Contacts *contact)
{
	std::cout << contact->get_first_name() << std::endl;
	std::cout << contact->get_last_name() << std::endl;
	std::cout << contact->get_nickname() << std::endl;
	std::cout << contact->get_phone_number() << std::endl;
	std::cout << contact->get_darkest_secret() << std::endl;
}

int	Phonebook::get_index(Phonebook *phonebook)
{
	return (this->_index);
}

Contacts	Phonebook::get_contact(Phonebook *phonebook, int i)
{
	return (this->_contacts[i]);
}

std::string	trunc(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

void	print_table(Phonebook *phonebook)
{
	int	i;

	i = 0;
	std::cout << "│──────────│──────────│──────────│──────────│" << std::endl;
	std::cout << "│     Index│First name│ Last name│  Nickname│" << std::endl;
	std::cout << "│──────────│──────────│──────────│──────────│" << std::endl;
	while (i < phonebook->get_index(phonebook))
	{
		std::cout << "│" << std::setw(10) << i + 1;
		std::cout << "│" << std::setw(10) << trunc(phonebook->get_contact(phonebook, i).get_first_name());
		std::cout << "│" << std::setw(10) << trunc(phonebook->get_contact(phonebook, i).get_last_name());
		std::cout << "│" << std::setw(10) << trunc(phonebook->get_contact(phonebook, i).get_nickname()) << "│";
		std::cout << std::endl << "│──────────│──────────│──────────│──────────│" << std::endl;
		i++;
	}
}

void	Phonebook::search(Phonebook *phonebook)
{
	std::string input;

	print_table(phonebook);
	std::getline(std::cin, input);
	if (input == "0")
		get_all(&phonebook->_contacts[0]);
	else if (input == "1")
		get_all(&phonebook->_contacts[1]);
}
