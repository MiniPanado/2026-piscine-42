/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eceleghi <eceleghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 14:00:55 by eceleghi          #+#    #+#             */
/*   Updated: 2026/08/09 15:12:12 by eceleghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strupcase(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return *str;
}

int main (void)
{
	char str[] = "HeLlO WoRlD";
	ft_strupcase(str);
	
	printf("%s\n", str);
}