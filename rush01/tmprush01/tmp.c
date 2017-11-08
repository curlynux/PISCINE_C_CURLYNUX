/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbijon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 09:42:18 by mbijon            #+#    #+#             */
/*   Updated: 2017/07/15 11:10:26 by stoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i = i + 1;
	}
}

int			ft_count_tab(char **av)
{
	int		i;
	int		j;

	i = 1;
	while (av != NULL && av[i] != '\0')
	{
		j = 0;
		while (av[i] != NULL && av[i][j])
		{
			if (!((av[i][j] >= '0' && av[i][j] <= '9') || av[i][j] == '.'))
				return (1);
			j = j + 1;
		}
		if (j != 9)
			return (1);
		i = i + 1;
	}
	if (i != 10)
		return (1);
	return (0);
}

int		rush(char **av)
{
	/* verifier le nombre de ligne et character + autre verif les chaines 
	 * contiennent soit un point soit un nombre */
	if (ft_count_tab(av) == 1)
		return (1);
	return (0);
}

int			main(int ac, char **av)
{
	if (ac == 10)
	{
		if (rush(av) == 1)
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
	return (0);
}
