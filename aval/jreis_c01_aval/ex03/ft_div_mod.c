/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 11:36:43 by jreis             #+#    #+#             */
/*   Updated: 2026/07/24 11:36:47 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 11;
	b = 4;
	div = 1;
	mod = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("a=%d divided by b=%d gives:\n", a, b);
	printf("- quotient= %d \n- remainder=%d.\n", div, mod);
	return (0);
}*/
