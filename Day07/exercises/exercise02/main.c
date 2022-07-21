/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:39:12 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/07 21:44:07 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*p;
	int	x;
	int	y;
	int	diff;

	x = 24;
	y = 22;
	diff = y - x;
	printf("%d\n", ft_ultimate_range(&p, x, y));
	while (diff > 1)
	{
		printf("%d\n", *p);
		diff--;
		p++;
	}
	printf("%d\n", *p);
	return (0);
}
