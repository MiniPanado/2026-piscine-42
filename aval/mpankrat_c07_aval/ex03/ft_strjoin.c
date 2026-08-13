/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 16:50:59 by mpankrat          #+#    #+#             */
/*   Updated: 2026/08/06 20:14:33 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		*dest = src[i];
		i++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	get_len(int size, char **strs, int sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i + 1 < size)
			len += sep;
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;
	int		len;

	if (size == 0)
	{
		res = (char *)malloc(1);
		if (res)
			res[0] = '\0';
		return (res);
	}
	len = get_len(size, strs, ft_strlen(sep));
	i = 0;
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (0);
	while (i < size)
	{
		res = ft_strcpy(res, strs[i]);
		if (i + 1 < size)
			res = ft_strcpy(res, sep);
		i++;
	}
	*res = '\0';
	return (res - len);
}

#include <stdio.h>

int	main(void)
{
	char	**strs = (char **)malloc((4 + 1) * sizeof(char *));
	char	sep[2] = ".";

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
}
