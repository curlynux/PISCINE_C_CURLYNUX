/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 10:35:03 by stoure            #+#    #+#             */
/*   Updated: 2017/07/28 04:05:56 by stoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_atoi(char *str)
{
	int		i;
	int		c;
	int		sign;

	i = 0;
	c = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		else
			sign = 1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		c = c * 10;
		c += str[i] - '0';
		i++;
	}
	return (c * sign);
}

#include <stdio.h>

int		main(int ac, char **av)
{
		(void)ac;
		printf("atoi: %d", ft_atoi(av[1]));
}
