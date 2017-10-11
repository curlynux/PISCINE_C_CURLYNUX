/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 05:56:37 by stoure            #+#    #+#             */
/*   Updated: 2017/07/18 10:00:18 by stoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char a;
	char c;
	char z;

	a = 'a';
	c = a;
	z = 'z';
	while (z >= c)
	{
		ft_putchar(z);
		z--;
	}
}
