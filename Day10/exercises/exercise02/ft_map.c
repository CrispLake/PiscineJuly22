/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:01:07 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/11 17:41:40 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f) (int))
{
	int	*arr;
	int	x;

	x = 0;
	arr = (int *)malloc(length * sizeof(int));
	while (length > x)
	{
		arr[x] = f(tab[x]);
		x++;
	}
	return (arr);
}
