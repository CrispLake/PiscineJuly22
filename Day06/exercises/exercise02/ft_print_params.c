/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:35:58 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/06 19:46:53 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	main(int argc, char **argv)
{
	char *p;
	int x;

	x = argc;
	if (argc == 1)
		return (0);
	while (x > 1)
	{
		argv++;
		p = *argv;
		while (*p != 0)
		{
			ft_putchar(*p);
			p++;
		}
		ft_putchar('\n');
		x--;
	}
	return (0);
}
