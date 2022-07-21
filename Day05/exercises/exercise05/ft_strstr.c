/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:35:21 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/06 00:01:13 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *reset;
	int x;
	int starting_point;

	x = 0;
	starting_point = 0;
	reset = to_find;
	if (*to_find == 0)
		return (str);
	while (*str != 0)
	{
		while (*to_find == *str)
		{
			to_find++;
			str++;
			x = 1;
			starting_point++;
		}
		if (*to_find == 0)
			return (str -= starting_point);
		if (x == 1)
		{
			to_find = reset;
			x = 0;
		}
		else
			str++;
		starting_point = 0;
	}
	return (0);
}
