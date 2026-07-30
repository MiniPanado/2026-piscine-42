/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 01:15:47 by lucerque          #+#    #+#             */
/*   Updated: 2026/07/30 01:15:49 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[len++] = src[i++];
	}
	dest[len] = '\0';
	return (dest);
}

/*#include <stdio.h>

int main(void)
{
    char dest[50] = "Hello";
    char src[] = " World!";

    printf("Antes: %s\n", dest);

    ft_strncat(dest, src, 3);
    printf("Depois (3 chars): %s\n", dest);

    ft_strncat(dest, src, 20);
    printf("Depois (resto): %s\n", dest);

    return (0);
}*/
