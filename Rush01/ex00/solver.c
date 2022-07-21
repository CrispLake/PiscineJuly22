/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorphet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:19:45 by smorphet          #+#    #+#             */
/*   Updated: 2022/07/09 19:57:29 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_valid_guess(char **puzzle, int row, int column, char guess);

int solver(char **puzzle, int row, int column, char guess)
{
    
    
    if (row == 9 && column == 8)        // checks if finished
        return (1);
    else if (column == 9)
    {
        row++;
		guess = '1';
        column = 0;          // starts new row
    }
    if (puzzle[row][column] != '.')
	{
	   	column++;
		return solver(puzzle, row, column, guess);    // if already filled in, recursively calls moving 1 to left
	}
	while (guess <= '9')
    {
        if (is_valid_guess(puzzle, row, column, guess) == 1)
        {
            puzzle[row][column] = guess;
                                            //checks for valid guess
        }
        guess++;
        if (solver(puzzle, row, column + 1, guess) == 1)
            return (1);
    }
    guess = '1';
    puzzle[row][column] = '.';
    return(0);
}
