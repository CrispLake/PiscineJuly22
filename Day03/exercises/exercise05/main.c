/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:47:22 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/01 23:37:27 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);
int		ft_putchar(char c);

int	main(void)
{
	int x = 9;
	int y = 1;
//	int result = '0';
//	int remainder = '0';


	ft_ultimate_div_mod(&x, &y);

	ft_putchar(x + '0');
	ft_putchar('\n');
	ft_putchar(y + '0');
	return (0);
}
