/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:24:55 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/07 15:11:53 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char *s1;

	s1 = ft_strdup("Catttt");
	printf("%s\n", s1);
	free(s1);
	return (0);
}
