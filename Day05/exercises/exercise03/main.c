/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:51:06 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/05 21:09:49 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{

	char str1[] = "haloo";
	char str2[] = "oolasss";

//	printf("%s\n", strcpy(str2,str1));
	printf("%s\n", ft_strcpy(str2, str1));
	printf("Source: %s\n", str1);
	printf("Dest: %s\n", str2);
	return (0);
}
