#include <unistd.h>

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int	main(int argc, char **argv)
{
	int	len;

	if (argc == 2)
	{
		len = ft_strlen(argv[1]) + 1;
		while (len--)
			write (1, &argv[1][len],1);
	}
	write (1, "\n", 1);
	return (0);
}
