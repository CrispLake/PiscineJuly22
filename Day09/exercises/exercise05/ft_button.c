/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:44:55 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/07 17:29:39 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_button(int i, int j, int k)
{
	if (i == k || i == j)
		return (i);
	else if (k == j)
		return (k);
	else if ((i > j && i < k) || (i < j && i > k))
		return (i);
	else if ((j > i && j < k) || (j < i && j > k))
		return (j);
	else if ((k > j && k < i) || (k < j && k > i))
		return (k);
	return (0);
}
