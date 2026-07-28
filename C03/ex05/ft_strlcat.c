static unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;

	dest_len = ft_strlen(dest);
	if (dest_len >= size)
	{
		return (dest_len + ft_strlen(src));
	}
	i = 0;
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + ft_strlen(src));
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[10] = "Hello";
	char	src[] = " World";
	size_t	ret;

	printf("Antes:\n");
	printf("dest = \"%s\"\n", dest);

	ret = ft_strlcat(dest, src, sizeof(dest));

	printf("\nDepois:\n");
	printf("dest = \"%s\"\n", dest);
	printf("Retorno = %zu\n", ret);

	if (ret >= sizeof(dest))
		printf("A string foi truncada.\n");
	else
		printf("A string foi copiada por completo.\n");

	return (0);
}*/
