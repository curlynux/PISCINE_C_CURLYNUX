#include <stdio.h>

int		ft_atoi(const char *str)
{
	int i;
	int c;
	int sign;

	i = 0;
	c = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
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

int		main(int ac, char **av)
{
	(void)ac;
//	printf("atoi: %d", atoi(av[1]));
	printf("atoi: %d", ft_atoi(av[1]));
}
