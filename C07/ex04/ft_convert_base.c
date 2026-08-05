#include <stdlib.h>
#include <stdbool.h>

#define ASCII_SIZE 256

static bool	is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

static bool	is_base_valid(const char *base)
{
	size_t	i;
	char	c;
	short	freq[ASCII_SIZE];

	if (!base || base[0] == '\0' || base[1] == '\0')
	{
		return (false);
	}
	i = -1;
	while (++i < ASCII_SIZE)
		*(freq + i) = 0;
	i = 0;
	while (*(base + i) != '\0')
	{
		c = *(base + i);
		if (c == '+' || c == '-' || is_space(c))
			return (false);
		if (++freq[(unsigned char)c] > 1)
			return (false);
		i++;
	}
	return (true);
}

static short	lookup_inic(short *lookup, const char *base)
{
	short	i;

	i = 0;
	while (i < ASCII_SIZE)
	{
		*(lookup + i) = -1;
		i++;
	}
	i = 0;
	while (*(base + i))
	{
		lookup[(unsigned char)base[i]] = i;
		i++;
	}
	return (i);
}

static int	ft_atoi_base(const char *str, const char *base, short *sign)
{
	size_t	i;
	int		res;
	short	lookup[ASCII_SIZE];
	short	base_len;

	if (!str || is_base_valid(base))
		return (0);
	i = 0;
	while (is_space(*(str + i)))
		i++;
	*sign = 1;
	while (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
		{
			*sign = -*sign;
		}
		i++;
	}
	base_len = lookup_inic(lookup, base);
	while (lookup[(unsigned char)base[i]] != -1)
		res = res * base_len + lookup[(unsigned char)base[i++]];
	return (res * *sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	short	sign;
	int		number;
	char	*str;

	if (!nbr || !is_base_valid(base_from) || !is_base_valid(base_to))
	{
		return (NULL);
	}
	number = ft_atoi_base(nbr, base_from, &sign);

}
