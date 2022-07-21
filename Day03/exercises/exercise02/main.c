/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:47:22 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/01 19:13:20 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);
int		ft_putchar(char c);

int	main(void)
{
	int x = '1';
	int y = '4';


	ft_putchar(x);
	ft_putchar(y);
	ft_swap(&x, &y);
	ft_putchar(x);
	ft_putchar(y);
	return (0);
}
