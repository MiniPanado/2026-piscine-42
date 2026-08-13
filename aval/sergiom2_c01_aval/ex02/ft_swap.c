/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergiom2 <sergiom2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 11:02:02 by sergiom2          #+#    #+#             */
/*   Updated: 2026/07/27 08:45:35 by sergiom2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 35;
	y = 12;
	printf("x: %d, y: %d\n", x, y);
	ft_swap(&x, &y);
	printf("x: %d, y: %d\n", x, y);
	return (0);
}*/
