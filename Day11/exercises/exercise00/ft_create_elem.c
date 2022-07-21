/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:57:40 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/12 20:26:41 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*x;

	x = malloc(sizeof(t_list));
	x->data = data;
	x->next = 0;
	return (x);
}
