/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:54:23 by jreis             #+#    #+#             */
/*   Updated: 2026/07/24 12:54:26 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 11;
	b = 4;
	printf("a=%d divided by b=%d gives:\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("- quotient= %d \n- remainder=%d.\n", a, b);
	return (0);
}*/
