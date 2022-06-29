#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s);
		i++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main(void)
{
	char	haysack[] = "This is a test string";
	char	accept[] = "opDgi";

	printf("%zu\n", ft_strspn(haysack, accept));
}
