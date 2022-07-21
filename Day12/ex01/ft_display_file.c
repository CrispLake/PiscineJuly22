/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:58:18 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/14 23:37:50 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#define BUF_SIZE 10

int	ft_display_file(char *str)
{
	int		reval;
	int		f2read;
	char	buf[BUF_SIZE + 1];

	reval = 1;
	f2read = open(str, O_RDONLY);
	if (f2read < 0)
	{
		ft_putstr("ft_cat: ");
		ft_putstr(str);
		ft_putstr(": No such file or directory\n");
		return (0);
	}
	while (reval)
	{
		reval = read(f2read, buf, BUF_SIZE);
		buf[reval] = '\0';
		ft_putstr(buf);
	}
	close(f2read);
	return (0);
}
