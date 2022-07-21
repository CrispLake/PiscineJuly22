/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:47:22 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/01 20:49:53 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);
int		ft_putchar(char c);

int	main(void)
{
	int x = '9';
	int y = '5';
	int result = '0';
	int remainder = '0';


	ft_div_mod(x, y, &result, &remainder);

	ft_putchar(result + '0');
	ft_putchar('\n');
	ft_putchar(remainder + '0');
	return (0);
}
