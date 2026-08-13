/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 15:59:37 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/13 18:02:09 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
		total_len += ft_strlen(strs[i++]);
	total_len += ft_strlen(sep) * (size - 1);
	return (total_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;

	if (size <= 0)
	{
		dest = malloc(1);
		if (dest)
			dest[0] = '\0';
		return (dest);
	}
	dest = malloc(ft_total_len(size, strs, sep) + 1);
	if (!dest)
		return (NULL);
	dest[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < (size - 1))
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*strs[] = {"Hello", "world", "from", "42"};
	char	*result;

	result = ft_strjoin(4, strs, " - ");

	if (result != NULL)
	{
		printf("Result: %s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed\n");
	}

	return (0);
}
*/