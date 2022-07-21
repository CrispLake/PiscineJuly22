/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:12:03 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/07 23:12:42 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char *ptr;
	char *str;
	char *rstptr;

	str = "president attack powers";
	while (argc > 1)
	{
		argv++;
		ptr = *argv;
		rstptr = ptr;
		while (*ptr != 0 || *str != 32 || *str != 0)
		{
			while (*ptr == *str)
			{
				if (*ptr > 64 && *ptr < 90)
					*ptr += 32;
				while (*ptr == *str)
				{
					ptr++;
					str++;
				}
				if (*ptr == 0 && (*str == 32 || *str == 0))
					write(1, "Alert!!!\n", 9);
				str++;
				ptr = rstptr;
			}
			ptr++;
		}
		argc--;
	}
	return (0);
}
