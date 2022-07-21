/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emajuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:01:58 by emajuri           #+#    #+#             */
/*   Updated: 2022/07/14 22:54:33 by emajuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <unistd.h>
# include <fcntl.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_cat(int params, char **strptr);
int		ft_display_file(char *str);

#endif
