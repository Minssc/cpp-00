# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 20:02:04 by minsunki          #+#    #+#              #
#    Updated: 2022/03/12 20:20:35 by minsunki         ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME			=		megaphone

SRCF			=		.	

FIL_M			=		megaphone

SRCS_M			=		$(addsuffix .cpp, $(FIL_M))

OBJS_M			=		$(SRCS_M:.cpp=.o)

CC				=		c++
CFLAGS			=		-Wall -Wextra -Werror -std=c++98 -pedantic
RM				=		rm -f

%.o				:		%.cpp
						$(CC) $(CFLAGS) -c $< -o $@

$(NAME)         :		$(OBJS_M)
						$(CC) $(OBJS_M) $(CFLAG) -o $(NAME)

clean           :
						$(RM) $(OBJS_M)

all				:		$(NAME)

fclean          :		clean
						$(RM) $(NAME)

re				:		fclean all

.PHONY          :		.c.o all clean fclean re