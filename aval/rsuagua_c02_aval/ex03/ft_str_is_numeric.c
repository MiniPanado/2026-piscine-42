/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsuagua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:43:23 by rsuagua           #+#    #+#             */
/*   Updated: 2026/08/06 17:44:12 by rsuagua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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

	test1 = "09098";
	test2 = "42hello";
	test3 = "";

	printf("\"%s\" -> %d\n", test1, ft_str_is_numeric(test1));
	printf("\"%s\" -> %d\n", test2, ft_str_is_numeric(test2));
	printf("\"%s\" -> %d\n", test3, ft_str_is_numeric(test3));

	return 0;
}
*/
