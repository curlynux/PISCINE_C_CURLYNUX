/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-rosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 09:54:57 by adi-rosa          #+#    #+#             */
/*   Updated: 2017/07/22 18:33:42 by adi-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush.h"

void	print_stat(char *rush, int large, int line)
{
	ft_putstr("[colle-");
	ft_putstr(rush);
	ft_putnbr(large);
	ft_putstr("] [");
	ft_putnbr(line);
	ft_putchar(']');
}

int		ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x])
		++x;
	return (x);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
