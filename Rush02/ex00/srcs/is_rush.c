/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:14:32 by nvan-den          #+#    #+#             */
/*   Updated: 2022/07/17 15:07:42 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_rush(char *pattern, int x, int y)
{
	if (ft_strcmp(pattern, rush_00(x, y)) == 0)
	{
		if (ft_strcmp(pattern, rush_01(x, y)) == 0)
			return (7);
		return (0);
	}
	if (ft_strcmp(pattern, rush_01(x, y)) == 0)
		return (1);
	if (ft_strcmp(pattern, rush_02(x, y)) == 0)
	{
		if (ft_strcmp(pattern, rush_03(x, y)) == 0)
			return (5);
		else if (ft_strcmp(pattern, rush_04(x, y)) == 0)
			return (8);
		return (2);
	}
	if (ft_strcmp(pattern, rush_03(x, y)) == 0)
	{
		if (ft_strcmp(pattern, rush_04(x, y)) == 0)
			return (6);
		return (3);
	}
	if (ft_strcmp(pattern, rush_04(x, y)) == 0)
		return (4);
	return (-1);
}
