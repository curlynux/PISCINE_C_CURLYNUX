/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 18:15:57 by stoure            #+#    #+#             */
/*   Updated: 2017/07/24 18:01:34 by stoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int res;

	res = 1;
	if (power < 0)
		return (0);
	else if (power == 1)
		return (1);
	else if (power == 0 || power == 1)
		return (res *= nb);
	return (nb * ft_recursive_power(nb, power - 1));
}
