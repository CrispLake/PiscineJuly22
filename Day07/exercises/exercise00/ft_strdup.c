/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 21:36:40 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/07 14:40:34 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*s;
	int		count;
	char	*reset;

	count = 1;
	reset = src;
	while (*src != 0)
	{
		count++;
		src++;
	}
	src = reset;
	s = (char *) malloc(count * sizeof(char));
	reset = s;
	while (*src != 0)
	{
		*s = *src;
		s++;
		src++;
	}
	*s = 0;
	return (s = reset);
}
