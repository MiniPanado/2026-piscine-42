static unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	if (ft_strlen(to_find) == 0)
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] != to_find[j])
				break ;
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return ((char *)0);
}

/*#include <stdio.h>

int main(void)
{
    char str[] = "Hello, world!";
    char *res;

    res = ft_strstr(str, "world");
    printf("Procurar \"world\": %s\n", res ? res : "NULL");

    res = ft_strstr(str, "Hello");
    printf("Procurar \"Hello\": %s\n", res ? res : "NULL");

    res = ft_strstr(str, "!");
    printf("Procurar \"!\": %s\n", res ? res : "NULL");

    res = ft_strstr(str, "abc");
    printf("Procurar \"abc\": %s\n", res ? res : "NULL");

    res = ft_strstr(str, "");
    printf("Procurar \"\": %s\n", res ? res : "NULL");

    return (0);
}*/
