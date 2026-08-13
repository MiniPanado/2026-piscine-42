/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efeltre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 19:23:37 by efeltre           #+#    #+#             */
/*   Updated: 2026/08/05 17:40:10 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
		return ;
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	x = 0;
	int	y = 10;
	int	div;
	int	mod;
	ft_div_mod(x, y, &div, &mod);
	printf("x: %d\ny: %d\n", x, y);
	printf("div: %d mod: %d\n", div, mod);
}
