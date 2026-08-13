/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 19:44:14 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/06 21:03:33 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define ASCII_SIZE 256

size_t	ft_strlen(char *str);
char	*ft_itoa_base(int num, char *str, const char *base, size_t base_len);

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

static int	ft_atoi_base(const char *str, const char *base)
{
	size_t	i;
	short	sign;
	int		res;
	short	lookup[ASCII_SIZE];
	short	base_len;

	if (!str || is_base_valid(base) == false)
		return (0);
	i = 0;
	while (is_space(*(str + i)))
		i++;
	sign = 1;
	while (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
		{
			sign = -sign;
		}
		i++;
	}
	base_len = lookup_inic(lookup, base);
	res = 0;
	while (lookup[(unsigned char)str[i]] != -1)
		res = res * base_len + lookup[(unsigned char)str[i++]];
	return (res * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	size_t	i;
	int		number;
	char	buffer[CHAR_BIT * sizeof(int) + 2];
	char	*str;

	if (!nbr || !is_base_valid(base_from) || !is_base_valid(base_to))
	{
		return (NULL);
	}
	number = ft_atoi_base(nbr, base_from);
	ft_itoa_base(number, buffer, base_to, ft_strlen(base_to));
	str = (char *)malloc((ft_strlen(buffer) + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*(buffer + i))
	{
		*(str + i) = *(buffer + i);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("\n");
		return (1);
	}
	char *str = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("Converted Base: %s\n", str);
	free(str);

}*/

//valgrind --leak-check=full ./a.out -42 0123456789 01
