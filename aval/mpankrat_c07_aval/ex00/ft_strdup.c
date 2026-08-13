/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 16:22:23 by mpankrat          #+#    #+#             */
/*   Updated: 2026/08/06 20:06:36 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	size_t	i;
	size_t	len;
	char	*dest;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	dest = malloc(3);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
int	main(void)
{
	char *src = "Arroz arawrraw";

	char *dest = ft_strdup(src);
	printf("%s\n", dest);
	free(dest);
}
