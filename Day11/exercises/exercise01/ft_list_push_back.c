/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:04:30 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/13 18:36:56 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*ptr;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		ptr = *begin_list;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = ft_create_elem(data);
	}
}
