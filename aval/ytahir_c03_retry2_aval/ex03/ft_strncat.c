/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:16:13 by ytahir            #+#    #+#             */
/*   Updated: 2026/08/09 20:05:07 by ytahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[20] = "Hello ";
	char	src[] = "World";

	printf("%s\n", ft_strncat(dest, src, 3)); // Hello Wor
	return (0);
}
*/
