/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:50:39 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/11 21:59:25 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_cnt_n_malloc(char *str, int cnt, int *x, int letter);
char	**ft_cp_str_to_strs(char *str, char **strs);

int	main(int argc, char **argv)
{
	char	**strs;
	int		x;
	int 	y;

	y = 0;
	strs = ft_cnt_n_malloc(argv[1], 0, &y, 0);
	strs = ft_cp_str_to_strs(argv[1], strs);
	x = 0;
	while (x < y)
	{
		printf("%s\n", strs[y - 1]);
		y--;
	}
}

char	**ft_cp_str_to_strs(char *str, char **strs)
{
	int		word;
	int		letter;
	int		ogletter;

	word = 0;
	ogletter = 0;
	while (str[ogletter] != 0)
	{
		letter = 0;
		while (str[ogletter] != 0 && str[ogletter] != ' ')
		{
			strs[word][letter] = str[ogletter];
			letter++;
			ogletter++;
		}
		if (str[ogletter] != 0)
		{
			strs[word][letter] = 0;
			word++;
			ogletter++;
		}
	}
	return (strs);
}

char	**ft_cnt_n_malloc(char *str, int cnt, int *x, int letter)
{
	char	**strs;

	while (str[letter] != 0)
	{
		while (str[letter++] != ' ' && str[letter++] != 0)
		cnt++;
		if (str[letter] != 0)
			letter++;
	}
	letter = 0;
	strs = (char **)malloc(cnt * sizeof(char *));
	while (str[letter] != 0)
	{
		cnt = 0;
		while (str[letter] != 0 && str[letter] != ' ')
		{
			cnt++;
			letter++;
		}
		if (str[letter] != 0)
			letter++;
		strs[*x] = (char *)malloc((cnt + 1) * sizeof(char));
		*x += 1;
	}
	return (strs);
}
