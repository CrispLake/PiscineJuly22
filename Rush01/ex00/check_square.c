/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:08:48 by vmustone          #+#    #+#             */
/*   Updated: 2022/07/09 20:41:40 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_square(char **puzzle, int row, int column, char guess)
{
	int	horizontal_inc;
	int	vertical_inc;
	int	starting_row;
	int	starting_column;

	starting_row = (row / 3) * 3;
	starting_column = (column / 3) * 3;
	horizontal_inc = 0;
	vertical_inc = 0;
	while (horizontal_inc < 3)
	{
		while (vertical_inc < 3)
		{
			if (puzzle[starting_row + horizontal_inc][starting_column + vertical_inc] == guess)
				return (1);
			vertical_inc++;
		}
		vertical_inc = 0;
		horizontal_inc++;
	}
	return (0);
}
