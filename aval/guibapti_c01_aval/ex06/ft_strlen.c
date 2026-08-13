/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibapti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 18:49:52 by guibapti          #+#    #+#             */
/*   Updated: 2026/07/26 19:16:04 by guibapti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
/*
int	main(void)
{
	int	len;
	char	out;

	len = ft_strlen("Bouas");
	out = '0' + len;
	write(1, &out, 1);
	write(1, "\n", 1);
	return(0);
}*/
