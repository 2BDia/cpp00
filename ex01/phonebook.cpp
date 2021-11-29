/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:56:01 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/11/29 11:32:07 by rvan-aud         ###   ########.fr       */
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
	std::cout << phonebook->_contacts[this->_index].get_first_name() << std::endl;
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

void	Phonebook::search(Phonebook *phonebook)
{
	std::string input;

	std::getline(std::cin, input);
	if (input == "0")
		get_all(&phonebook->_contacts[0]);
	else if (input == "1")
		get_all(&phonebook->_contacts[1]);
}
