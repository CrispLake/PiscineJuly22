/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:59:08 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/07 20:38:53 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*x;
	int	y;
	int	z;
	int	diff;

	z = -15;
	y = 20;
	diff = y - z;
	x = ft_range(z, y);
	while (diff > 0)
	{
		printf("%i\n", *x);
		x++;
		diff--;
	}
	return (0);
}
