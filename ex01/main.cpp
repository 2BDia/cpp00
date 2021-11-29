/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:58:22 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/11/29 09:50:39 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1cpy;
	unsigned char	*s2cpy;

	s1cpy = (unsigned char *)s1;
	s2cpy = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1cpy[i] == s2cpy[i] && s1cpy[i] && s2cpy[i])
		i++;
	if (s1cpy[i] != s2cpy[i])
		return (s1cpy[i] - s2cpy[i]);
	else
		return (0);
}

int	main(void)
{
	Phonebook	instance;
	int			i;
	std::string	input;
	const char	*buff;

	i = 0;
	while (1)
	{
		std::cout << "Enter your command : ";
		std::cin >> input;
		buff = input.c_str();
		if (!ft_strncmp("ADD", buff, input.length()))
		{
			std::cout << "add" << std::endl;
		}
		if (!ft_strncmp("SEARCH", buff, input.length()))
		{
			std::cout << "search" << std::endl;
		}
		if (!ft_strncmp("EXIT", buff, input.length()))
		{
			std::cout << "exit" << std::endl;
			break ;
		}
	}
	return (0);
}