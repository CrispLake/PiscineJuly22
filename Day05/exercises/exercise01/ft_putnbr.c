/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:29:02 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/15 13:03:44 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
int		power_counter(int nb);

void	ft_putnbr(int nb)
{
	int		counter;
	long	nb2;
	long	test;

	test = nb;
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
		counter = counter * 10; 
	}
//	counter = power_counter(counter);
	while (counter > 0)
	{
		ft_putchar(nb2 / counter + '0');
		nb2 = nb2 % counter;
		counter = counter / 10;
	}
}

/*int	power_counter(int counter)
{
	int	x;
	int	number;

	x = 10;
	number = 1;
	while (counter > 0)
	{
		number = number * x;
		counter--;
	}
	return (number);
}*/
