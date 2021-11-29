/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:58:22 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/11/29 11:11:22 by rvan-aud         ###   ########.fr       */
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
		{
			// std::cout << "add" << std::endl;
			phonebook.add(&phonebook);
		}
		else if (input == "SEARCH")
		{
			std::cout << "search" << std::endl;
			phonebook.search(&phonebook);
		}
		else if (input == "EXIT" || input == "")
		{
			std::cout << "exit" << std::endl;
			break ;
		}
	}
	return (0);
}
