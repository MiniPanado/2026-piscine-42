/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltdomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:50:24 by eltdomin          #+#    #+#             */
/*   Updated: 2026/07/29 19:49:36 by eltdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n)
	{
		if (*src != '\0')
		{
			*(dest + a) = *src;
		}
		else
		{
			*(dest + a) = '\0';
		}
		src++;
		a++;
	}
	return (dest);
}
