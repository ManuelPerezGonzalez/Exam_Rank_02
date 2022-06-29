char	*ft_strcpy(char *str1, char *str2)
{
	int	pos;

	pos = 0;
	while (str2[pos])
	{
		str1[pos] = str2[pos];
		pos++;
	}
	str1[pos] = str2[pos];
	return (str1);
}

#include <stdio.h>

int	main(void)
{
	char	str1[] = "¿Qué haces?";
	char	str2[] = "¡Hola!";

	printf("%s\n", str1);
	ft_strcpy(str1, str2);
	printf("%s\n", str1);
	return (0);
}
