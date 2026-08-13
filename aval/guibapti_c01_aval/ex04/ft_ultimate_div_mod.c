/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibapti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 18:14:51 by guibapti          #+#    #+#             */
/*   Updated: 2026/07/26 18:34:50 by guibapti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
/*
int	main()
{
	int	a;
	int	b;
	char	out;

	a = 15;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	out = '0' + a;
	write(1, &out, 1);
	write(1, " ", 1);
	out = '0' + b;
	write(1, &out, 1);
}*/
