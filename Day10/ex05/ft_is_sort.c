/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 21:59:59 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/12 11:46:22 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f) (int, int))
{
	int	x;

	x = 0;
	while (x < length - 1)
	{
		if (f(tab[x], tab[x + 1]) > 0)
			return (0);
		x++;
	}
	return (1);
}
