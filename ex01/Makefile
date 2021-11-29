# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/26 14:50:17 by rvan-aud          #+#    #+#              #
#    Updated: 2021/11/29 16:30:54 by rvan-aud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp		\
			commands.cpp	\
			contacts.cpp	\
			phonebook.cpp	\

NAME	= phonebook

CC		= clang++

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -std=c++98

OBJS	= $(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re