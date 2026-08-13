/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsuagua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:35:53 by rsuagua           #+#    #+#             */
/*   Updated: 2026/08/06 20:42:23 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src != '\0')
	{
		dest[i] = *src++;
		i++;
	}
	i[dest] = '\0';
	return (dest);
}

#include <stdio.h>
int	main()
{
	char dest[20] = "hello";
	char *src = "42";

	printf("%s\n", ft_strcpy(dest, src));
	return 0;
}
