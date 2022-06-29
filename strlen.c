int	ft_strlen(char	*s)
{
	int	pos;

	pos = 0;
	while (s[pos])
		pos++;
	return (pos);
}

#include <stdio.h>

int	main(void)
{
	char	s[] = "Hola";

	printf("%d\n", ft_strlen(s));
	return (0);
}
