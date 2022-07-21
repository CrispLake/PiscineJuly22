/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:55:09 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/05 14:00:21 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		number_return(long counter, char *str);

int	ft_atoi(char *str)
{
	long	counter;
	char	*y;

	y = str;
	counter = 1;
	while (*str == '-' || *str == '+' || *str == ' ' || *str == '\n'
		|| *str == '\t' || *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str >= 48 && *str < 58)
	{
		counter *= 10;
		str++;
	}
	str = y;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == 45)
	{
		str++;
		return (-1 * number_return(counter, str));
	}
	else
		return (number_return(counter, str));
	return (0);
}

int	number_return(long counter, char *str)
{
	long	returned_number;
	int		counter2;

	counter2 = 0;
	returned_number = 0;
	if (*str == '+')
		str++;
	while (*str >= 48 && *str < 58)
	{
		counter /= 10;
		returned_number += (*str - 48) * counter;
		str++;
		counter2++;
	}
	if (counter2 > 19)
		return (-1);
	return (returned_number);
}
