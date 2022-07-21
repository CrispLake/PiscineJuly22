/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:55:51 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/14 23:09:50 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#define BUF_SIZE 10

void	ft_cat(int params, char **strptr)
{
	int		str;
	int		tmp;
	char	buf[BUF_SIZE + 1];

	tmp = 1;
	if (params == 0)
	{
		while (tmp)
		{
			tmp = read(0, buf, BUF_SIZE);
			buf[tmp] = 0;
			ft_putstr(buf);
		}
	}
	str = 0;
	while (params > str)
		ft_display_file(strptr[str++]);
}
