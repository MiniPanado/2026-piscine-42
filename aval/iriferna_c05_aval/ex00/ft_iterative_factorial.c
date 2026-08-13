/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iriferna <iriferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 03:26:42 by iriferna          #+#    #+#             */
/*   Updated: 2026/08/13 05:56:16 by iriferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}

// int	main(void)
// {
// 	printf("factorial de -4 = %d\n", ft_iterative_factorial(4));
// 	printf("factorial de -2 = %d\n", ft_iterative_factorial(-2));
// 	return (0);
// }
