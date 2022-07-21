/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mkstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:41:53 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/19 13:16:27 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_free_str(char *str, char *str2);

char	*ft_mkstr(int readval, int cnt)
{
	char	input[1];
	char	*str;
	char	*str2;

	while (readval)
	{
		readval = read(0, input, 1);
		if (readval == 0 && cnt < 1)
			return (NULL);
		if (readval == 0)
			return (str2);
		str = (char *)malloc((++cnt + 1) * sizeof(char));
		if (cnt != 1)
			ft_free_str(str, str2);
		str[cnt - 1] = input[0];
		str[cnt] = 0;
		readval = read(0, input, 1);
		if (readval == 0)
			return (str);
		str2 = (char *)malloc((++cnt + 1) * sizeof(char));
		ft_free_str(str2, str);
		str2[cnt - 1] = input[0];
		str2[cnt] = 0;
	}
	return (str);
}

void	ft_free_str(char *str, char *str2)
{
	ft_strcpy(str, str2);
	free(str2);
}
