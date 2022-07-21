/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:16:03 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/07 21:48:58 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*iarr;
	int	*tp;
	int	diff;

	diff = max - min;
	if (min >= max)
	{
		*iarr = NULL;
		return (iarr);
	}
	iarr = (int *)malloc(diff * sizeof(int));
	tp = iarr;
	while (diff > 0)
	{
		diff--;
		*iarr = min;
		min++;
		iarr++;
	}
	return (iarr = tp);
}
