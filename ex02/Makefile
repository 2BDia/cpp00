# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 11:25:16 by rvan-aud          #+#    #+#              #
#    Updated: 2021/12/01 11:43:00 by rvan-aud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	tests.cpp		\
			Account.cpp	\

NAME	= ex02

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
