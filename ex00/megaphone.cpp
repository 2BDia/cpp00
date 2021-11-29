/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:52:16 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/11/26 12:52:16 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	megaphone(char *argv)
{
	char	c;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] >= 'a' && argv[i] <= 'z')
		{
			c = argv[i] - 32;
			std::cout << c;
		}
		else
			std::cout << argv[i];
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		megaphone(argv[i]);
		i++;
	}
	std::cout << std::endl;
	return (0);
}