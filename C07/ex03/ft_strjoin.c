/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 20:23:04 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/06 01:53:23 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

static size_t	ft_strslen(char **strs, size_t size, size_t sep_len)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < (size - 1))
		{
			len += sep_len;
		}
		i++;
	}
	return (len);
}

static char	*ft_strscat(char *buffer, char **strs, char *sep, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	index;

	i = 0;
	index = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			buffer[index++] = strs[i][j];
			j++;
		}
		if (i < (size - 1))
		{
			j = 0;
			while (sep[j] != '\0')
				buffer[index++] = sep[j++];
		}
		i++;
	}
	buffer[index] = '\0';
	return (buffer);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ans;
	size_t	total_size;

	if (size <= 0 || strs == NULL || *strs == NULL || sep == NULL)
	{
		ans = (char *)malloc(1 * sizeof(char));
		if (ans == NULL)
		{
			return (NULL);
		}
		*ans = '\0';
		return (ans);
	}
	total_size = ft_strslen(strs, (size_t)size, ft_strlen(sep));
	ans = (char *)malloc((total_size + 1) * sizeof(char));
	if (ans == NULL)
	{
		return (NULL);
	}
	ans = ft_strscat(ans, strs, sep, (size_t)size);
	return (ans);
}

/*#include <stdio.h>

int	main(void)
{
	char	**strs = (char **)malloc((4 + 1) * sizeof(char *));
	char	sep[3] = ", ";

	strs[0] = "Hello Hola";
	strs[1] = "Hola Hello";
	strs[2] = "Hola Hola,";
	strs[3] = "bola tuga.";
	strs[4] = NULL;

	char *s = ft_strjoin(4, strs, sep);

	printf("%s\n", s);

	free(strs);
	free(s);
	return (0);
}*/
