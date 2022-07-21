/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:31:50 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/11 19:58:40 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_count_if(char **tab, int(*f) (char *));

int	check(char *str)
{
	while (*str != 0)
	{
		if (*str == 'E')
			return (1);
		str++;
	}
	return (0);
}

int	main(void)
{
	char	**str;

	str = (char **)malloc(5 * sizeof(char *));
	str[0] = "Cat";
	str[1] = "LEL";
	str[2] = "PEn";
	str[3] = "EEM";
	str[4] = 0;
	printf("%d\n", ft_count_if(str, &check));
	return (0);
}
