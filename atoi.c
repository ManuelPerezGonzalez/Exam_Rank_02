#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	long	r;

	r = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + (str[i] - '0');
		i++;
	}
	return (sign * (int)r);
}

int	main(void)
{
	char	a[] = " \n\r\v\t\f -87341lsakjd ";
	printf("%d\n", ft_atoi(a));
}
