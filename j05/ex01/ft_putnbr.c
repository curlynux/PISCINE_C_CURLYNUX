/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 20:09:54 by stoure            #+#    #+#             */
/*   Updated: 2017/07/26 19:05:51 by stoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int nbr;

	nbr = (long)nb;
	if (nbr < 0)
		ft_putchar(nbr - '-');
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	nbr %= 10;
		ft_putchar(nbr + '0');
}
