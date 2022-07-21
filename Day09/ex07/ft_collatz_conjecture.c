/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:30:28 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/07 18:06:17 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_collatz_conjecture(unsigned int base)
{
	int	i;

	i = -1;
	if (base > 1)
	{
		if (base % 2 == 0)
			i = ft_collatz_conjecture(base / 2);
		else
			i = ft_collatz_conjecture(base * 3 + 1);
	}
	i++;
	return (i);
}
