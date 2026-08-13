/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 16:57:33 by ytahir            #+#    #+#             */
/*   Updated: 2026/08/07 21:00:10 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	diff = s1[i] - s2[i];
	return (diff);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strncmp("Hello", "Hellz", 4)); // 0
	printf("%d\n", ft_strncmp("Hello", "Hellz", 5)); // negative
	return (0);
}*/


#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned int n = 5;
	char *s1 = "Hellww";
	char *s2 = "Helloi";
	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
	printf("strncmp: %d\n", strncmp(s1, s2, n));
}
