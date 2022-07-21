/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:51:14 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/12 20:53:02 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

int	main(void)
{
	t_list	*ptr;

	ptr = ft_create_elem("hello");
	printf("%s\n", ptr->data);
	return (0);
}
