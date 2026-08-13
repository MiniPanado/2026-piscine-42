/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytahir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 16:14:29 by ytahir            #+#    #+#             */
/*   Updated: 2026/08/06 16:22:10 by ytahir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	diff = s1[i] - s2[i];
	return (diff);
}
/*
#include <stdio.h>

int main(void)
{
        char    s1[] = "Hello";
        char    s2[] = "Hellz";
        int     diff;

        diff = ft_strcmp(s1, s2);
        printf("The difference is %d\n", diff);
        return (0);
}
*/
