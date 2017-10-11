/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 14:33:02 by stoure            #+#    #+#             */
/*   Updated: 2017/07/27 15:50:06 by stoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i]; 
		i++;
	}
	dest[i] = '\0'; 
	return (dest);
}

#include <stdio.h>

int		main(int ac, char **av)
{
	(void)ac;
	printf("str: %s", ft_strcpy(av[1], av[2]));
}
