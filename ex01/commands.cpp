/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:30:23 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/11/29 16:30:43 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Phonebook::add(Phonebook *phonebook)
{
	std::string	input;
	int			i;

	i = 0;
	if (this->_index == 8)
		this->_index = 0;
	while (i < 5)
	{
		if (i == 0)
			std::cout << "First name:" << std::endl << "+ ";
		else if (i == 1)
			std::cout << "Last name:" << std::endl << "+ ";
		else if (i == 2)
			std::cout << "Nickname:" << std::endl << "+ ";
		else if (i == 3)
			std::cout << "Phone number:" << std::endl << "+ ";
		else if (i == 4)
			std::cout << "Darkest secret:" << std::endl << "+ ";
		std::getline(std::cin, input);
		if (input == "")
		{
			std::cout << std::endl;
			std::cin.clear();
			return ;
		}
		if (i == 0)
			phonebook->_contacts[this->_index].set_first_name(input);
		else if (i == 1)
			phonebook->_contacts[this->_index].set_last_name(input);
		else if (i == 2)
			phonebook->_contacts[this->_index].set_nickname(input);
		else if (i == 3)
			phonebook->_contacts[this->_index].set_phone_number(input);
		else if (i == 4)
			phonebook->_contacts[this->_index].set_darkest_secret(input);
		i++;
	}
	this->_index++;
	if (this->_index_gen < 8)
		this->_index_gen++;
	std::cout << std::endl;
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
	while (i < phonebook->get_index_gen(phonebook))
	{
		std::cout << "│" << std::setw(10) << i + 1;
		std::cout << "│" << std::setw(10) << trunc(phonebook->get_contact(phonebook, i).get_first_name());
		std::cout << "│" << std::setw(10) << trunc(phonebook->get_contact(phonebook, i).get_last_name());
		std::cout << "│" << std::setw(10) << trunc(phonebook->get_contact(phonebook, i).get_nickname()) << "│";
		std::cout << std::endl << "│──────────│──────────│──────────│──────────│" << std::endl;
		i++;
	}
	std::cout << std::endl;
}

void	Phonebook::search(Phonebook *phonebook)
{
	std::string input;
	int			i;

	print_table(phonebook);
	if (phonebook->get_index_gen(phonebook) == 0)
	{
		std::cout << "The contact list is empty! Please add one first." << std::endl << std::endl;
		return ;
	}
	std::cout << "Please enter an index to display more informations:" << std::endl << "#";
	std::getline(std::cin, input);
	if (input != "1" && input != "2" && input != "3" && input != "4" && input != "5" && input != "6" && input != "7" && input != "8")
	{
		if (input == "")
		{
			std::cin.clear();
			std::cout << std::endl << "Please enter a valid index." << std::endl << std::endl;
			return ;
		}
		std::cout << "Please enter a valid index." << std::endl << std::endl;
		return ;
	}
	i = std::stoi(input);
	if (i <= phonebook->get_index_gen(phonebook) && i > 0)
		get_all(&phonebook->_contacts[i - 1]);
	else
		std::cout << "Please enter a valid index." << std::endl << std::endl;
}
