/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 19:06:36 by stoure            #+#    #+#             */
/*   Updated: 2017/07/28 03:43:38 by stoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int c;
	int sign;

	i = 0;
	c = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 7 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		c *= 10;
		c += str[i] - '0';
		i++;
	}
	return (c * sign);
}

int		main(int argc, char **argv)
{
	(void)argc;
	printf("atoi: %d", ft_atoi(argv[1]));
	return (0);
}
