/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 20:39:54 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/08 22:47:30 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int	main(void)
{
	char **ptr;
	char *ptr2;
	ptr = ft_split_whitespaces("Koira Kissa 	\n KISSA");
	
	ptr2 = *ptr;
	printf("%s", ptr2);
	return (0);
}
