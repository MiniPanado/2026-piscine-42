/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltdomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 15:30:40 by eltdomin          #+#    #+#             */
/*   Updated: 2026/08/10 15:30:28 by eltdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	b;
	int				srclen;
	int				i;

	i = 0;
	b = 0;
	srclen = str_len(dest);
	while (src[b] != '\0' && b < nb)
	{
		dest[srclen + b] = src[b];
		b++;
	}
	dest[srclen + b] = '\0';
	return (dest);
}
