/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:51:55 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/05 18:41:37 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	printf("%d\n", ft_atoi("          -232938"));
    printf("%d\n", ft_atoi("          -232938"));
    printf("%d\n", ft_atoi("-          232938"));
    printf("%d\n", atoi("-          232938"));
    printf("%d\n", ft_atoi("--          232938"));
    printf("%d\n", atoi("--          232938"));
    printf("%d\n", ft_atoi("++          232938"));
    printf("%d\n", atoi("++          232938"));
    printf("%d\n", ft_atoi("+          232938"));
    printf("%d\n", atoi("+          232938"));
    printf("%d\n", ft_atoi("1.3f"));
    printf("%d\n", atoi("1.3f"));
    printf("%d\n", ft_atoi("+22323"));
    printf("%d\n", atoi("+22323"));
    printf("%d\n", ft_atoi("7194230188746722653"));
    printf("%d\n", atoi("7194230188746722653"));
    printf("%d\n", ft_atoi("0"));
    printf("%d\n", atoi("0"));
    printf("%d\n", ft_atoi("NULL"));
    printf("%d\n", atoi("NULL"));
    printf("%d\n", ft_atoi("92233720368547758090"));
    printf("%d\n", atoi("92233720368547758090"));
    printf("%d\n", ft_atoi("1312178931223992832"));
    printf("%d\n", atoi("1312178931223992832"));
    printf("%d\n", ft_atoi("0.000001"));
    printf("%d\n", atoi("0.000001"));
    printf("%d\n", ft_atoi("1283718jkh"));
    printf("%d\n", atoi("1283718jkh"));
    printf("%d\n", ft_atoi("-9312178931223939283"));
    printf("%d\n", atoi("-9312178931223939283"));
    printf("%d\n", ft_atoi("9223372036854775750"));
    printf("%d\n", atoi("9223372036854775750"));
	return (0);
}
