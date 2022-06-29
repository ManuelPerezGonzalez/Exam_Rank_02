#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	shift;
	unsigned char	mask;
	char	out;

	shift = 7;
	mask = 1;
	while (shift >= 0)
	{
		out = ((octet >> shift) & mask) + '0';
		write (1, &out, 1);
		shift--;
	}
}

int	main(void)
{
	print_bits(2);
	write (1, "\n", 1);
}
