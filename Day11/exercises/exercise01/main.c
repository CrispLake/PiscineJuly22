/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:32:14 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/13 20:39:12 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int	main(void)
{
	char	*ddd = "SSS";
	t_list	*ptr;
	ptr = NULL;
	
	ft_list_push_back(&ptr, "Hei!");	
	ft_list_push_back(&ptr, "Maailma");
	ft_list_push_back(&ptr, "Hello");
	ft_list_push_back(&ptr, "World");
	while (ptr->next != NULL)
	{	
		printf("%s\n", ptr->data);
		ptr = ptr->next;
	}
	printf("%s\n", ptr->data);
}
