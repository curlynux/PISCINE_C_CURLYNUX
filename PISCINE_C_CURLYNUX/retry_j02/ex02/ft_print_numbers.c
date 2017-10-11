/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 08:58:31 by stoure            #+#    #+#             */
/*   Updated: 2017/07/09 06:17:30 by stoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char nbr;
	char ch0;
	char ch1;

	ch0 = '0';
	ch1 = '9';
	nbr = ch0;
	while (nbr <= ch1)
	{
		ft_putchar(nbr);
		nbr++;
	}
}
