#include <unistd.h>

void	str_capitalizer(char *str)
{
	while (*str)
	{
		while (*str && (*str == ' ' || *str == '\t'))
		{
			write (1, str, 1);
			str++;
		}
		if (*str)
		{
			if (*str >= 'a' && *str <= 'z')
				*str -= ('a' - 'A');
			write (1, str, 1);
			str++;
		}
		while (*str && *str != ' ' && *str != '\t')
		{
			if (*str >= 'A' && *str <= 'Z')
				*str += ('a' - 'A');
			write (1, str, 1);
			str++;
		}
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int i;

	if (argc == 1)
		write (1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			i++;
		}
	}
	return (0);
}
