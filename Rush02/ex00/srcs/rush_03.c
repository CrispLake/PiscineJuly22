/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmykkane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:06:04 by jmykkane          #+#    #+#             */
/*   Updated: 2022/07/17 12:47:15 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_top3(int cx, int *index, char *str)
{
	int	i;

	i = 0;
	while (i < cx)
	{
		if (i == 0)
		{
			str[*index] = 'A';
			*index += 1;
		}
		if (i < cx -2)
		{
			str[*index] = 'B';
			*index += 1;
		}
		if (i == cx - 1 && cx > 1)
		{
			str[*index] = 'C';
			*index += 1;
		}
		i++;
	}
	str[*index] = '\n';
	*index += 1;
}

void	draw_body3(int cx, int *index, char *str, int i)
{
	if (i < 1)
	{
		str[*index] = 'B';
		*index += 1;
	}
	if (i >= cx && i != 1)
	{
		str[*index] = 'B';
		*index += 1;
	}
	if (i > 1 && i < cx)
	{
		str[*index] = ' ';
		*index += 1;
	}
	i++;
}

void	print_body3(int cx, int cy, int *index, char *str)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (l < cy - 2)
	{
		while (i <= cx)
		{
			if (i < 1)
				draw_body3(cx, index, str, i);
			if (i >= cx && i != 1)
				draw_body3(cx, index, str, i);
			if (i > 1 && i < cx)
				draw_body3(cx, index, str, i);
			i++;
		}
		str[*index] = '\n';
		*index += 1;
		i = 0;
		l++;
	}
}

void	print_bottom3(int cx, int cy, int *index, char *str)
{
	int	i;

	i = 0;
	if (cy >= 2)
	{
		while (i < cx)
		{
			if (i == 0)
			{
				str[*index] = 'A';
				*index += 1;
			}
			if (i < cx -2)
			{
				str[*index] = 'B';
				*index += 1;
			}
			if (i == cx - 1 && cx > 1)
			{
				str[*index] = 'C';
				*index += 1;
			}
			i++;
		}
	}
}

char	*rush_03(int cx, int cy)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * ((cx * cy) + cy + 3));
	if (cx >= 1 && cy >= 1)
	{
		print_top3(cx, &i, str);
		if (cy > 1)
			print_body3(cx, cy, &i, str);
		print_bottom3(cx, cy, &i, str);
		if (cy >= 2)
		{
			str[i] = '\n';
			i += 1;
		}
		str[i] = '\0';
	}
	return (str);
}
