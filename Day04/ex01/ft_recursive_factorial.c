/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 18:29:06 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/02 19:00:28 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 13 && nb > 0)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
	else if (nb == 0)
	{
		return (1);
	}
	return (0);
}
