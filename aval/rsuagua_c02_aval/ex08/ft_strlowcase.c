/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsuagua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:46:30 by rsuagua           #+#    #+#             */
/*   Updated: 2026/08/06 17:46:51 by rsuagua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	test1[] = "hello42";
	char	test2[] = "HELLO42";
	char	test3[] = "HeLlO 42";

	printf("%s -> ", test1);
	printf("%s\n", ft_strlowcase(test1));

	printf("%s -> ", test2);
	printf("%s\n", ft_strlowcase(test2));

	printf("%s -> ", test3);
	printf("%s\n", ft_strlowcase(test3));

	return (0);
}*/
