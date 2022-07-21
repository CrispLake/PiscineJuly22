/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:54:03 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/11 19:55:03 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f) (char *))
{
	int	string;
	int	count;

	count = 0;
	string = 0;
	while (tab[string] != 0)
		if (f(tab[string++]) == 1)
			count++;
	return (count);
}
