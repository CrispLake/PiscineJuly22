/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:38:52 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/07 18:00:40 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	int	ft_collatz_conjecture(unsigned int base);

int	main(void)
{
	printf("%u\n", ft_collatz_conjecture(176577));
	return (0);
}
