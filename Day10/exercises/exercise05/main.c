/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:28:44 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/12 11:46:07 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f) (int, int));

int	check(int x, int y)
{
	return (x - y);
}

int	main(void)
{
	int	arr[6] = {1, 2, 3, 4, 6, 5};

	printf("%d\n", ft_is_sort(arr, 6, &check));

}
