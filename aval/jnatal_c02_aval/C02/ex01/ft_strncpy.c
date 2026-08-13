/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnatal-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 20:58:10 by jnatal-e          #+#    #+#             */
/*   Updated: 2026/07/30 21:02:17 by jnatal-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
		dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char	dest[2]; 
// 	char	str;
// 	printf("mostra : %s \n", dest);
// 	ft_strncpy(dest, &str, 3);
// 	printf("isso : %s \n", dest);
// 	return(0);
// }