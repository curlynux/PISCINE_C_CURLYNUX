/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-rosa <yfuks@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 14:58:33 by adi-rosa          #+#    #+#             */
/*   Updated: 2017/07/22 15:30:02 by adi-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdlib.h>

char	*ft_re_malloc(char *str, int size)
{
	char	*dest;
	int		x;

	x = 0;
	if ((dest = malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	while (x < size - 2)
	{
		dest[x] = str[x];
		++x;
	}
	free(str);
	return (dest);
}

int		check_errors(char *str)
{
	int x;
	int large;
	int line;
	int tmp;

	large = 0;
	x = 0;
	tmp = 0;
	line = 0;
	while (str[x])
	{
		if (str[x] == '\n')
		{
			if (line != 0 && large != tmp)
				return (ERROR);
			tmp = large;
			large = 0;
			++line;
		}
		else
			++large;
		++x;
	}
	check_char(str, 0, tmp, line);
	return (SUCCESS);
}
