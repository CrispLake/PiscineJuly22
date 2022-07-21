# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmykkane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/16 13:14:50 by jmykkane          #+#    #+#              #
#    Updated: 2022/07/17 16:13:14 by nvan-den         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

LIB = -L. -lrush

SRCS = srcs/main.c srcs/rush_00.c srcs/rush_01.c srcs/rush_02.c srcs/rush_03.c \
srcs/rush_04.c srcs/ft_countingx.c srcs/ft_countingy.c srcs/ft_print.c \
srcs/ft_mkstr.c srcs/is_rush.c

FLAGS = -Wall -Werror -Wextra

HEADER = -I header.h

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(LIB) $(HEADER) $(FLAGS) $(SRCS)

clean:

fclean:
	rm -f $(NAME)

re:	fclean all

