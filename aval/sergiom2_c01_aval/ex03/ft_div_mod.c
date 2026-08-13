/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergiom2 <sergiom2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 11:22:49 by sergiom2          #+#    #+#             */
/*   Updated: 2026/07/27 08:50:35 by sergiom2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	x;
	int	y;
	int	d;
	int	m;

	x = 45;
	y = 5;
	ft_div_mod(x, y, &d, &m);
	printf("div: %d, mod: %d\n", d, m);
	return (0);
}*/
