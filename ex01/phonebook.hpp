/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:52:36 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/11/29 14:45:35 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

class	Contacts
{
	public:

		Contacts(void);
		~Contacts(void);

		void		set_first_name(std::string input);
		std::string	get_first_name(void);
		void		set_last_name(std::string input);
		std::string	get_last_name(void);
		void		set_nickname(std::string input);
		std::string	get_nickname(void);
		void		set_phone_number(std::string input);
		std::string	get_phone_number(void);
		void		set_darkest_secret(std::string input);
		std::string	get_darkest_secret(void);

	private:

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

class	Phonebook
{
	public:
		
		Phonebook(void);
		~Phonebook(void);

		void		add(Phonebook *phonebook);
		void		search(Phonebook *phonebook);
		void		get_all(Contacts *contact);
		int			get_index(Phonebook *phonebook);
		Contacts	get_contact(Phonebook *phonebook, int i);
	
	private:
	
		Contacts	_contacts[8];
		int			_index;
};

#endif
