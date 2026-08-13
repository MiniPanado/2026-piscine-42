/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asatar <asatar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:44:47 by asatar            #+#    #+#             */
/*   Updated: 2026/08/09 16:21:08 by asatar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
#include <stdio.h> */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/* int	main(void)
{
	char	*test;
	int		lenght;

	test = "Something";
	lenght = ft_strlen(test);
	printf("Number of characters: %d\n", lenght);
	return (0);
} */