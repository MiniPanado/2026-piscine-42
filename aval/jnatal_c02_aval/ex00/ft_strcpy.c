/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnatal-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 18:47:24 by jnatal-e          #+#    #+#             */
/*   Updated: 2026/07/30 19:49:11 by jnatal-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char	dest[2]; 
// 	char	src[] = "luis \0 silva";
// 	printf("mostra : %s, %u \n", dest, dest, dest);
// 	ft_strcpy(dest, src);
// 	printf("isso : %s \n", dest);
// 	return(0);
// }