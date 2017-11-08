/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-rosa <yfuks@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 14:20:38 by adi-rosa          #+#    #+#             */
/*   Updated: 2017/07/22 16:51:02 by adi-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush.h"

int		check_char(char *str, int x, int large, int line)
{
	if (str[x] == 'o')
		rush00(str, large, line);
	else if (str[x] == '/')
		rush01(str, large, line);
	else if (str[x] == 'A')
		rush02(str, large, line);
	else
	{
		ft_putstr("aucune");
		return (ERROR);
	}
	return (SUCCESS);
}

int		main(void)
{
	char	*str;
	int		x;
	char	c;

	if ((str = malloc(sizeof(char) * 2)) == NULL)
		return (0);
	x = 0;
	while (read(0, &c, 1))
	{
		str[x++] = c;
		str = ft_re_malloc(str, x + 2);
	}
	str[x] = '\0';
	printf("%s", str);
	check_errors(str);
	ft_putchar('\n');
	free(str);
	return (SUCCESS);
}
