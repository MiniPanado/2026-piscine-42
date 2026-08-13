/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsuagua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:41:02 by rsuagua           #+#    #+#             */
/*   Updated: 2026/08/06 20:43:24 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "hello world";
	char	dest[12];
	unsigned int	i;

	ft_strncpy(dest, src, 5);

	i = 0;
	while (i < 5)
	{
		if (dest[i] == '\0')
			printf("dest[%u] = \\\\0\n", i);
		else
			printf("dest[%u] = %c\n", i, dest[i]);
		i++;
	}
	return (0);
}
*/
