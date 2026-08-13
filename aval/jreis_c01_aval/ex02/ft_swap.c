/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 10:06:07 by jreis             #+#    #+#             */
/*   Updated: 2026/07/24 10:06:10 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

/*int	main(void)
{
	int	n_a;
	int	n_b;
	int	*a;
	int	*b;

	n_a = 10;
	n_b = 99999;
	a = &n_a;
	b = &n_b;
	printf("Before: \n a is pointing to %d\n b is pointing to %d.\n", *a, *b);
	ft_swap(a, b);
	printf("After: \n a is pointing to %d\n b is pointing to %d.", *a, *b);
	return (0);
}
*/