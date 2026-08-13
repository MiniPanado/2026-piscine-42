/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltdomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 17:16:48 by eltdomin          #+#    #+#             */
/*   Updated: 2026/08/13 19:49:42 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = nb;
	if (power == 0)
		return (1);
	while (--power)
		num *= nb;
	return (num);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(42, -1));
}
