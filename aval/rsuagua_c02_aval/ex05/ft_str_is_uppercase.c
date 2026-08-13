/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsuagua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:45:00 by rsuagua           #+#    #+#             */
/*   Updated: 2026/08/06 17:45:13 by rsuagua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*test1;
	char	*test2;
	char	*test3;

	test1 = "hello42";
	test2 = "HELLO";
	test3 = "";

	printf("\"%s\" -> %d\n", test1, ft_str_is_uppercase(test1));
	printf("\"%s\" -> %d\n", test2, ft_str_is_uppercase(test2));
	printf("\"%s\" -> %d\n", test3, ft_str_is_uppercase(test3));

	return 0;
}
*/
