/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:15:05 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/07 12:13:29 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_takes_place(int hour)
{
	char	*str;

	str = "THE FOLLOWING TAKES PLACE BETWEEN";
	if (hour > 0 && hour < 11)
		printf("%s %d.00 A.M. AND %d.00 A.M.\n", str, hour, hour + 1);
	else if (hour == 11)
		printf("%s %d.00 A.M. AND %d.00 P.M.\n", str, hour, hour + 1);
	else if (hour == 12)
		printf("%s 12.00 P.M. AND %d.00 P.M.\n", str, hour - 11);
	else if (hour > 12 && hour < 23)
		printf("%s %d.00 P.M. AND %d.00 P.M.\n", str, hour - 12, hour - 11);
	else if (hour == 0)
		printf("%s 12.00 A.M. AND %d.00 A.M.\n", str, hour + 1);
	else if (hour == 23)
		printf("%s %d.00 P.M. AND 12.00 A.M.\n", str, hour - 12);
}
