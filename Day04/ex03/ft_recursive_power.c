/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 22:34:12 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/02 23:13:23 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power == 1)
	{
		return (nb);
	}
	if (power > 1)
	{
		power--;
		return (nb * ft_recursive_power(nb, power));
	}
	return (0);
}
