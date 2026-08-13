/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efeltre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 19:45:20 by efeltre           #+#    #+#             */
/*   Updated: 2026/08/05 13:28:29 by efeltre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
// int main(void)
// {
//     int a = 18;
//     int b = 4;

//     ft_ultimate_div_mod(&a, &b);
//     printf("div: %d\n", a);
//     printf("Mod: %d\n", b);
//     return(0);
// }
