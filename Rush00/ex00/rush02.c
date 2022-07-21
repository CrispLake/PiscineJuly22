/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:55:44 by jcampell          #+#    #+#             */
/*   Updated: 2022/07/03 19:15:59 by jcampell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	first_line(int width, int x);
void	last_line(int width, int x);
void	mid_line(int width, int x);

void	rush(int x, int y)
{
	int	width;
	int	length;

	if (x <= 0 || y <= 0)
		return ;
	length = 1;
	while (length <= y)
	{
	width = 1;
		while (width <= x)
		{
			if (length == 1)
				first_line(width, x);
			else if (length == y)
				last_line(width, x);
			else
				mid_line(width, x);
			width++;
		}
		ft_putchar('\n');
		length++;
	}
}

void	first_line(int width, int x)
{
	if (width == 1)
		ft_putchar('A');
	else if (width == x)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	last_line(int width, int x)
{
	if (width == 1)
		ft_putchar('C');
	else if (width == x)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	mid_line(int width, int x)
{
	if (width == 1)
		ft_putchar('B');
	else if (width == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}
