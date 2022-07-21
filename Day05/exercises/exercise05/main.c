/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:58:52 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/05 23:06:30 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char array1[] = "asdfghcatkleow";
	char array2[] = "cat";
	char *ptr;
	
	ptr = ft_strstr(array1, array2);
	printf("Substring is %s\n", ptr);
	return (0);
}
