/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:59:41 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/14 19:46:34 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#define BUF_SIZE 10

int	main(int argc, char **argv)
{
	int		reval;
	int		f2read;
	char	buf[BUF_SIZE + 1];

	reval = 1;
	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		f2read = open(argv[1], O_RDONLY);
		if (f2read < 0)
			return (0);
		while (reval)
		{
			reval = read(f2read, buf, BUF_SIZE);
			buf[reval] = '\0';
			ft_putstr(buf);
		}
		close(f2read);
	}
	return (0);
}
