/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eceleghi <eceleghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:42:36 by eceleghi          #+#    #+#             */
/*   Updated: 2026/08/09 14:51:57 by eceleghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	if (!dest || !src)
	{
		return (dest);
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int main (void)
{
	// char	name;
	
	char	dest[30] = "jose";
	char	src[] = "gooooooooooooollllll";
	
	ft_strcpy(dest, src);
	printf("%s\n", ft_strcpy(dest, src));
	return (0);
} */