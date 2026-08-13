/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 18:38:43 by ytahir            #+#    #+#             */
/*   Updated: 2026/08/07 21:03:41 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	start;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		start = i;
		j = 0;
		while (to_find[j] != '\0' && str[i] == to_find[j])
		{
			j++;
			i++;
		}
		if (to_find[j] == '\0')
			return (&str[start]);
		i = start + 1;
	}
	return (0);
}
/*
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "abcdef";

	printf("%s\n", ft_strstr(str, "cd")); // cdef
	printf("%s\n", ft_strstr(str, "ab")); // abcdef
	printf("%s\n", ft_strstr(str, "ef")); // ef

	return (0);
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("\n");
		return (1);
	}
	printf("ft_strstr: %s\n", ft_strstr(argv[1], argv[2]));
	printf("strstr: %s\n", strstr(argv[1], argv[2]));
	return (0);
}
