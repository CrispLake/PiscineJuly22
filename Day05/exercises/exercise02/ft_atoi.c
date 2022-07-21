/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:52:43 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/05 19:05:27 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_calculate_value(char *str, int is_n, int *c_ptr);

int	ft_atoi(char *str)
{
	int is_n;
	long return_value;
	int counter;

	counter = 0;
	is_n = 1;
	while (*str == 32 || (*str < 14 && *str > 8))
			str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_n = -1;
		str++;
	}
	return_value = ft_calculate_value(str, is_n, &counter);
//	if (counter > 18 && is_negative == -1 &&  < -9223372036854775807 - 1)
//		return (0);
//	else if (counter > 18 && return_value > 9223372036854775807)
//		return (-1);
	return (return_value * iZZs_n);
}

long	ft_calculate_value(char *str, int is_n, int *c_ptr)
{
	long long r;

	r = 0;
	while (*str >= '0' && *str <= '9')
	{
//		if (r == 922337203685477600)
//			return (-1)
		r = r * 10 + (*str - 48);
		str++;
		(*c_ptr)++;
	}

	if ((*c_ptr > 19 || (r < -9223372036854775807 - 1 && *c_ptr == 19))
			&& is_n == -1)
		return (0);
	else if ((r > 9223372036854775806 + 1 && *c_ptr == 19) || *c_ptr > 19)
		return (-1);
	return (r);
}
