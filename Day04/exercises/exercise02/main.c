/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:24:12 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/02 21:12:06 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	x = -4;
	int y = 3;

	printf("Number: %d \n", x);
	printf("Power: %d \n", y);
	x = ft_iterative_power(x, y);
	printf("Number after powering: %d", x);
}
