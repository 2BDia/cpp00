/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:56:01 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/11/29 16:30:39 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	std::cout << "Constructor called" << std::endl;
	this->_index = 0;
	this->_index_gen = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Phonebook::get_all(Contacts *contact)
{
	std::cout << "First name: " << contact->get_first_name() << std::endl;
	std::cout << "Last name: " << contact->get_last_name() << std::endl;
	std::cout << "Nickname: " << contact->get_nickname() << std::endl;
	std::cout << "Phone number: " << contact->get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << contact->get_darkest_secret() << std::endl;
	std::cout << std::endl;
}

int	Phonebook::get_index(Phonebook *phonebook)
{
	return (this->_index);
}

int	Phonebook::get_index_gen(Phonebook *phonebook)
{
	return (this->_index_gen);
}

Contacts	Phonebook::get_contact(Phonebook *phonebook, int i)
{
	return (this->_contacts[i]);
}
