#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int n;

	if (argc == 2)
	{
		i = 0;
		n = 0;
		while (argv[1][i])
		{
			i++;
			n++;
		}
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i--;
			n--;
		}
		while (argv[1][i] != ' ' && argv[1][i] != '\t')
			i--;
		while (++i <= n)
			write (1, &argv[1][i], 1);
	}
	write (1, "\n", 1);
	return (0);
}
