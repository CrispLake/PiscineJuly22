/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:52:43 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/05 16:19:06 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_calculate_value(char *str, int *counter_ptr);

int	ft_atoi(char *str)
{
	int is_negative;
	long return_value;
	int counter;

	counter = 0;
	is_negative = 1;
	while (*str == 32 || (*str < 14 && *str > 8))
			str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_negative = -1;
		str++;
	}
	return_value = ft_calculate_value(str, &counter);
	if (counter > 19 && is_negative == -1)
		return (0);
	else if (counter > 19)
		return (-1);
	return (return_value * is_negative);
}

long	ft_calculate_value(char *str, int *counter_ptr)
{
	long return_value;

	return_value = 0;
	while (*str >= '0' && *str <= '9')
	{
		return_value = return_value * 10 + (*str - 48);
		str++;
		(*counter_ptr)++;
	}
	return (return_value);
}
