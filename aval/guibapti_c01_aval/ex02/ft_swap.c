/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibapti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 17:37:20 by guibapti          #+#    #+#             */
/*   Updated: 2026/07/26 17:58:33 by guibapti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main()
{
	int	a;
	int	b;
	char	out;

	a = 2;
	b = 5;

	ft_swap(&a, &b);
	out = '0' + a;
	write(1, &out, 1);
	write(1, " ", 1);
	out = '0' + b;
	write(1, &out, 1);

	return(0);
}*/
