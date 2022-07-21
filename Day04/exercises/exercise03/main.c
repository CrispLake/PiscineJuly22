/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:24:12 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/02 23:13:13 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	x = 5;
	int y = 0;

	printf("Number: %d \n", x);
	printf("Power: %d \n", y);
	x = ft_recursive_power(x, y);
	printf("Number after powering: %d", x);
}
