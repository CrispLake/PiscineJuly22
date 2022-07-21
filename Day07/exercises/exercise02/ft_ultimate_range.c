/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:19:51 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/07 22:15:26 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	*ptr;
	int	i;

	i = max - min;
	diff = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(diff * sizeof(int));
	ptr = *range;
	while (diff > 0)
	{
		*ptr = min;
		min++;
		ptr++;
		diff--;
	}
	return (i);
}
