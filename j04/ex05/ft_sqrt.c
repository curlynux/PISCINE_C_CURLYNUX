/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 01:12:56 by stoure            #+#    #+#             */
/*   Updated: 2017/07/27 09:39:03 by stoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb == 0)
		return (0);

	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (i - '0');
}

int		main(int ac, char **av)
{
	(void)ac;
	int nb;

	nb = *av[1] - 48;
	printf("sqrt: %d", ft_sqrt(nb));
	return (0);
}
