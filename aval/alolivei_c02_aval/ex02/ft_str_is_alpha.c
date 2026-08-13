/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 22:47:27 by alolivei          #+#    #+#             */
/*   Updated: 2026/08/07 21:53:02 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] < 'a' || str[i] > 'z')
				&& (str[i] < 'A' || str[i] > 'Z')))
			return (0);
		i++;
	}
	return (1);
}
int	main(void)
{
	char    *str;
	int     oreturn;

	str = "ADSkdsnfkj";
	oreturn = ft_str_is_alpha(str);

	printf("return %d\n", oreturn);
	return (0);
}
