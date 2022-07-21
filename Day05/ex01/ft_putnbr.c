/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:29:02 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/04 18:57:06 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int		counter;
	long	nb2;
	long	test;

	test = (long) nb;
	if (test < 0)
	{
		ft_putchar('-');
		test = test * (-1);
	}
	nb2 = test;
	counter = 1;
	while (test > 9)
	{
		test = test / 10;
		counter *= 10;
	}
	while (counter > 0)
	{
		ft_putchar(nb2 / counter + '0');
		nb2 = nb2 % counter;
		counter = counter / 10;
	}
}
