/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 09:30:16 by jreis             #+#    #+#             */
/*   Updated: 2026/07/27 09:30:20 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
// #include <stdio.h>
// #include <string.h>

int	ft_strlen(char *str)
{
	int	strlen;

	strlen = 0;
	while (str[strlen] != '\0')
	{
		strlen++;
	}
	return (strlen);
}

// int	main(void)
// {
// 	int		i;
// 	char	*str;

// 	str = "ola";
// 	i = ft_strlen(str);
// 	printf("the length (with my function) of the string is %d \n", i);
// 	i = strlen(str);
// 	printf("the length (with original function) of the string is %d \n", i);
// }
