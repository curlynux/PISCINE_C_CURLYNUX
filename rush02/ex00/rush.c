/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-rosa <yfuks@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 15:22:33 by adi-rosa          #+#    #+#             */
/*   Updated: 2017/07/22 18:38:06 by adi-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	rush00(char *str, int large, int line)
{
	int x;

	x = 0;
	while (str[x])
	{
		if (str[x] != '\n' && str[x] != 'o'
			&& str[x] != '-' && str[x] != '|')
		{
			ft_putstr("aucune");
			return ;
		}
		++x;
	}
	ft_putstr("[colle-00] [");
	ft_putnbr(large);
	ft_putstr("] [");
	ft_putnbr(line);
	ft_putchar(']');
}

void	rush01(char *str, int large, int line)
{
	int x;

	x = 0;
	while (str[x])
	{
		if (str[x] != '\n' && str[x] != '/'
			&& str[x] != ' ' && str[x] != '\\' && str[x] != '*')
		{
			ft_putstr("aucune");
			return ;
		}
		++x;
	}
	ft_putstr("[colle-01] [");
	ft_putnbr(large);
	ft_putstr("] [");
	ft_putnbr(line);
	ft_putchar(']');
}

void	print_rush(char *corner, int large, int line)
{
	if (corner[0] == 'A' && corner[1] == 'A'
		&& corner[2] == 'C' && corner[3] == 'C')
		print_stat("02] [", large, line);
	else if ((corner[0] == 'A' && corner[1] == 'C'
				&& corner[2] == 'A' && corner[3] == 'C')
			|| (corner[0] == 'A' && corner[1] == '0'
				&& corner[2] == 'A' && corner[3] == '0')
			|| (corner[0] == 'A' && corner[1] == 'C' && corner[2] == '0'
				&& corner[3] == '0'))
		print_stat("03] [", large, line);
	else if (corner[0] == 'A' && corner[1] == 'C'
			&& corner[2] == 'C' && corner[3] == 'A')
		print_stat("04] [", large, line);
	else if (line == 1 && large == 1)
	{
		ft_putstr("[colle-02] [1] [1] || [colle-03] [1] [1]");
		ft_putstr(" || [colle-04] [1] [1]");
	}
	else
		ft_putstr("aucune");
}

void	get_corner(char *str, char *corner, int large, int line)
{
	int x;

	x = ft_strlen(str);
	corner[0] = str[0];
	if (line > 1)
	{
		if (large > 1)
			corner[3] = str[x - 2];
		else
			corner[3] = '0';
		x -= 2;
		while (x > -1 && str[x] != '\n')
			--x;
		if (x != 0)
			++x;
		corner[2] = str[x];
	}
	else
	{
		corner[3] = '0';
		corner[2] = '0';
	}
}

void	rush02(char *str, int large, int line)
{
	char	corner[4];
	int		x;

	x = -1;
	while (str[++x])
		if (str[x] != '\n' && str[x] != ' '
			&& str[x] != 'A' && str[x] != 'B' && str[x] != 'C')
		{
			ft_putstr("aucune");
			return ;
		}
	x = 0;
	while (str[x] && str[x] != '\n')
		++x;
	if (large > 1)
		corner[1] = str[x - 1];
	else
		corner[1] = '0';
	get_corner(str, corner, large, line);
	print_rush(corner, line, large);
}
