/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:37:56 by nvan-den          #+#    #+#             */
/*   Updated: 2022/07/17 14:35:36 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print(int is_rush, int x, int y)
{
	if (is_rush < 5)
	{
		ft_putstr("[rush-0");
		ft_putnbr(is_rush);
		ft_putstr("] [");
		ft_putnbr(x);
		ft_putstr("] [");
		ft_putnbr(y);
		ft_putstr("]");
	}
	else if (is_rush == 5)
		print234(x, y);
	else if (is_rush == 6)
		print34(x, y);
	else if (is_rush == 7)
		print_all(x, y);
	else if (is_rush == 8)
		print24(x, y);
	ft_putchar('\n');
}

void	print234(int x, int y)
{
	ft_putstr("[rush-02] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("] || ");
	ft_putstr("[rush-03] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("] || ");
	ft_putstr("[rush-04] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

void	print34(int x, int y)
{
	ft_putstr("[rush-03] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("] || ");
	ft_putstr("[rush-04] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

void	print_all(int x, int y)
{
	ft_putstr("[rush-02] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("] || ");
	ft_putstr("[rush-03] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("] || ");
	ft_putstr("[rush-02] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("] || ");
	ft_putstr("[rush-03] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("] || ");
	ft_putstr("[rush-04] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

void	print24(int x, int y)
{
	ft_putstr("[rush-02] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("] || ");
	ft_putstr("[rush-04] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}
