/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:52:36 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/11/29 16:33:08 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
#include "contacts.hpp"

class	Phonebook
{
	public:
		
		Phonebook(void);
		~Phonebook(void);

		void		add(Phonebook *phonebook);
		void		search(Phonebook *phonebook);
		void		get_all(Contacts *contact);
		int			get_index(Phonebook *phonebook);
		int			get_index_gen(Phonebook *phonebook);
		Contacts	get_contact(Phonebook *phonebook, int i);
	
	private:
	
		Contacts	_contacts[8];
		int			_index;
		int			_index_gen;
};

#endif
