# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emajuri <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 15:13:12 by emajuri           #+#    #+#              #
#    Updated: 2022/07/11 16:00:03 by emajuri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OF = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INC = includes/

WWW = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(WWW) -I $(INC) -c $(SRC)
	ar rc $(NAME) $(OF)
	ranlib $(NAME)

clean:
	rm -f $(OF)

fclean: clean
	rm -f $(NAME)

re: fclean all
