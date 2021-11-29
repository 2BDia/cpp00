/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:58:22 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/11/29 16:33:00 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	Phonebook	phonebook;
	std::string	input;

	std::cout << "Enter your command : " << std::endl;
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input == "ADD")
			phonebook.add(&phonebook);
		else if (input == "SEARCH")
			phonebook.search(&phonebook);
		else if (input == "EXIT" || input == "")
			break ;
	}
	return (0);
}
