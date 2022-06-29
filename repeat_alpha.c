int	letter_count(char c)
{
	int	n;

	if (c >= 'A' && c <= 'Z')
		n = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		n = c - 'a' + 1;
	else
		n = 1;
	return (n);
}

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	repeat;

	if (argc == 2)
	{
		while (*argv[1])
		{
			repeat = letter_count(*argv[1]);
			while (repeat--)
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
