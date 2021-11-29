/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:18:39 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/11/29 11:23:42 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contacts::Contacts(void)
{
	this->_first_name = "First name";
	this->_last_name = "Last name";
	this->_nickname = "Nickname";
	this->_phone_number = "Phone number";
	this->_darkest_secret = "Darkest secret";
	return ;
}

Contacts::~Contacts(void)
{
	return ;
}

void	Contacts::set_first_name(std::string input)
{
	this->_first_name = input;
}

std::string	Contacts::get_first_name(void)
{
	return (this->_first_name);
}

void	Contacts::set_last_name(std::string input)
{
	this->_last_name = input;
}

std::string	Contacts::get_last_name(void)
{
	return (this->_last_name);
}

void	Contacts::set_nickname(std::string input)
{
	this->_nickname = input;
}

std::string	Contacts::get_nickname(void)
{
	return (this->_nickname);
}

void	Contacts::set_phone_number(std::string input)
{
	this->_phone_number = input;
}

std::string	Contacts::get_phone_number(void)
{
	return (this->_phone_number);
}

void	Contacts::set_darkest_secret(std::string input)
{
	this->_darkest_secret = input;
}

std::string	Contacts::get_darkest_secret(void)
{
	return (this->_darkest_secret);
}

