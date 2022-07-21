/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:33:07 by nvan-den          #+#    #+#             */
/*   Updated: 2022/07/17 15:19:13 by shaukkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_strcmp(char *s1, char *s2);
void	ft_strcpy(char *dest, char *src);
void	ft_print(int is_rush, int x, int y);
void	print234(int x, int y);
void	print34(int x, int y);
void	print24(int x, int y);
void	print_all(int x, int y);
int		is_rush(char *pattern, int x, int y);
char	*ft_mkstr(int rval, int cnt);
int		ft_countingx(char *str);
int		ft_countingy(char *str);
char	*rush_00(int cx, int cy);
char	*rush_01(int cx, int cy);
char	*rush_02(int cx, int cy);
char	*rush_03(int cx, int cy);
char	*rush_04(int cx, int cy);

#endif /* HEADER_H */
