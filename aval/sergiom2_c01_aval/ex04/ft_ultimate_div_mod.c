/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergiom2 <sergiom2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 11:30:46 by sergiom2          #+#    #+#             */
/*   Updated: 2026/07/27 09:11:07 by sergiom2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a / *b;
	temp_b = *a % *b;
	*a = temp_a;
	*b = temp_b;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 13;
	y = 5;
	ft_ultimate_div_mod(&x, &y);
	printf("div: %d, mod: %d\n", x, y);
	return (0);
}*/
