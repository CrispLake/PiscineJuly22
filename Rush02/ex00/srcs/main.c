/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:31:49 by nvan-den          #+#    #+#             */
/*   Updated: 2022/07/17 15:20:57 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(void)
{
	int		rush_nr;
	char	*pattern;
	int		x;
	int		y;

	pattern = (ft_mkstr(1, 0));
	if (pattern == NULL)
	{
		ft_putstr("No pattern found, please try again.\n");
		return (1);
	}
	x = (ft_countingx(pattern));
	y = (ft_countingy(pattern));
	rush_nr = is_rush(pattern, x, y);
	if (rush_nr < 0)
	{
		ft_putstr("No pattern found, please try again.\n");
		return (2);
	}
	ft_print(rush_nr, x, y);
	free(pattern);
	return (0);
}
