#include <unistd.h>

int	ft_atoi(char *str)
{
	int	n;

	while (*str >= '0' && *str <= '9')
	{
		n = (n * 10) + (*str - '0');
		str++;
	}
	return (n);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write (1, &c, 1);
}

void	tab_mult(char *str)
{
	int	n;
	int	i;

	n = ft_atoi(str);
	i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		write (1, " x ", 3);
		ft_putnbr(n);
		write (1, " = ", 3);
		ft_putnbr(i * n);
		write (1, "\n", 1);
		i++;
	}	
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(argv[1]);
	write (1, "\n", 1);
	return (0);
}
