/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:17:37 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/11 18:30:38 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f) (int));

int	change(int arr)
{
	arr = arr + 1;
	return (arr);
}


int	main(void)
{
	int arr[4] = {1, 2, 3, 4};
	int *arr2;
	int x;

	x = 0;
	arr2 = ft_map(arr, 4, &change);
	while (x < 4)
	{
		printf("%d\n", arr2[x]);
		x++;
	}
	return (0);
}
