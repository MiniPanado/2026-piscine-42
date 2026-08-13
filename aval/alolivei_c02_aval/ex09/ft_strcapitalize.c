/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 02:38:43 by alolivei          #+#    #+#             */
/*   Updated: 2026/08/07 21:58:19 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || str[i - 1] == 32)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char	str[] = "o mundo CONSPIRA A FAvor de quem "
	 "nao CONSPIRA CONTRA NINGUEM";

	ft_strcapitalize(str);
	printf("r: %s\n", str);
	return (0);
}*/
