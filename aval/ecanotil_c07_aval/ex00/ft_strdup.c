/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanotil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:47:02 by ecanotil          #+#    #+#             */
/*   Updated: 2026/08/11 20:54:17 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		l;
	char	*dup;

	if (!src)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
		i++;
	dup = malloc((i) * sizeof(char));
	l = 0;
	if (!dup)
		return (NULL);
	while (l <= i)
	{
		dup[l] = src[l];
		l++;
	}
	return (dup);
}

int	main(void)
{
	char *str;

	str = "hello";
	char *s1 = ft_strdup(str);
	char *s2 = strdup(str);

	write(1, s1, 5);
	write(1, "\n", 1);
	write(1, s2, 5);
	free(s1);
	free(s2);
}

