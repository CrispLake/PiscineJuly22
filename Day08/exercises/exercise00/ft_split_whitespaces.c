/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:56:53 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/09 12:01:32 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split_whitespaces(char *str)
{
	int		counter;
	int		count2;
	char	**ptr;
	char	*strptr;
	char	*wp;
	char	*rst;
	char **rstdptr;


	count2 = 0;
	strptr = str;
	rst = strptr;
	while (*rst != 0)
	{
		while (*rst == 32 || (*rst > 8 && *rst < 14))
			rst++;
		while (*rst != 0 && (*rst != 32 || (*rst > 8 && *rst < 14)))
			rst++;
		count2++;
	}
	ptr = (char **)malloc((count2 + 1 ) * sizeof(char *));
	rstdptr = ptr;
	while (*strptr != 0)
	{
		counter = 0;
		while (*strptr == 32 || (*strptr > 8 && *strptr < 14))
			strptr++;
		while (*strptr != 0 && (*strptr != 32 || (*strptr > 8 && *strptr < 14)))
		{
			strptr++;
			counter++;
		}
		ptr[x] = (char *)malloc((counter + 1) * sizeof(char));
		wp = ptr[x];
		x++;
		strptr -= counter;
		while (*strptr != 0 && (*strptr != 32 || (*strptr > 8 && *strptr < 14)))
		{
			*wp = *strptr;
			wp++;
			strptr++;
		}
		*wp = 0;
	}
	wp++;
	wp = (char *)malloc((counter + 1) * sizeof(char));
	*wp = 0;
	ptr = &wp;
	ptr = rstdptr;
	return (ptr);
}
