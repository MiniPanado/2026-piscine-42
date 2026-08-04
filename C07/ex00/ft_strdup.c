#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dest)
	{
		return (NULL);
	}
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		return (1);
	}
	while (*++argv != NULL)
	{
		printf("%s\n", *argv);
	}
	return (0);
}*/
