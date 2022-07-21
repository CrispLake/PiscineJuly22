/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:51:06 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/05 22:33:13 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{

	char str1[] = "haloo";
	char str2[] = "oolasss";

//	printf("%s\n", strncpy(str2,str1, 3));
	printf("%s\n", ft_strncpy(str2, str1, 3));
	printf("Source: %s\n", str1);
	printf("Dest: %s\n", str2);
	return (0);
}
