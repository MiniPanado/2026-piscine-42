/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iriferna <iriferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 03:47:38 by iriferna          #+#    #+#             */
/*   Updated: 2026/08/13 05:52:01 by iriferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

// int	main(void)
// {
// 	printf("2 ^ 5 = %d\n", ft_iterative_power(2, 5));
// 	printf("10 ^ 3 = %d\n", ft_iterative_power(10, 3));
// 	return (0);
// }
