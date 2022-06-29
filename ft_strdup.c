#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*s;
	int	i;

	i = 0;
	while (src[i])
		i++;
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i] = '\0';
	while (i >= 0)
	{
		s[i] = src[i];
		i--;
	}
	return (s);
}

int	main(void)
{
	char	str[] = "Hola que tal?";

	printf("%s\n", ft_strdup(str));
}
