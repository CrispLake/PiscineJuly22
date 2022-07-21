/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:57:40 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/13 18:21:12 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*x;

	x = malloc(sizeof(t_list));
	if (x == NULL)
		exit(1);
	x->data = data;
	x->next = NULL;
	return (x);
}
