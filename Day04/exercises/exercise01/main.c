/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:24:12 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/02 19:32:57 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	x = 5;

	printf("%d \n", x);
	x = ft_recursive_factorial(x);
	printf("%d", x);
}
