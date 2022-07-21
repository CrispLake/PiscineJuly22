# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emajuri <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/13 20:46:27 by emajuri           #+#    #+#              #
#    Updated: 2022/07/14 20:27:22 by emajuri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = main.c ft_putchar.c ft_putstr.c

INC = .

WWW = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(WWW) $(SRC) -I $(INC) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
