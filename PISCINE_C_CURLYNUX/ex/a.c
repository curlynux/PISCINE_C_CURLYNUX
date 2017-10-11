#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_a(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (str[i] == 'a')
			ft_putchar('a');
		++str;
	}
}

int		main(int ac, char **av)
{
		(void)ac;
		printf("atoi: %d", ft_atoi(av[1]));
}
