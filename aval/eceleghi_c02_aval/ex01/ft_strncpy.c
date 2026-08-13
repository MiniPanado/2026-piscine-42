/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eceleghi <eceleghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:42:36 by eceleghi          #+#    #+#             */
/*   Updated: 2026/08/09 14:51:10 by eceleghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (!dest || !src)
	{
		return (dest);
	}
	while (src[i] != '\0' && i < n)
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

/* int main (void)
{
	// char	name;
	
	char	dest[] = "jose";
	char	src[] = "josee";
	
	ft_strncpy(dest, src, 6);
	printf("%s\n", ft_strncpy(dest, src, 6));
	return (0);
} 
*/
