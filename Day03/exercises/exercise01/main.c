/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:47:22 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/01 13:03:30 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int ********nbr);
int		ft_putchar(char c);

int	main(void)
{
	int		a;
	int		*ptr;
	int		**ptr2;
	int		***ptr3;
	int		****ptr4;
	int		*****ptr5;
	int		******ptr6;
	int		*******ptr7;
	int		********ptr8;

	a = '5';
	ptr = &a;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ft_ultimate_ft(ptr8);
	ft_putchar(*ptr);
	return (0);
}
