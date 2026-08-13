/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 09:48:15 by jreis             #+#    #+#             */
/*   Updated: 2026/07/27 09:48:18 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		j = size - 1 - i;
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
	}
}

// int	main(void)
// {
// 	int	i;
// 	int	tab[5];
// 	int	size;

// 	tab[0] = 4;
// 	tab[1] = 3;
// 	tab[2] = 2;
// 	tab[3] = 1;
// 	tab[4] = 0;
// 	size = 5;
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_rev_int_tab(&tab[0], size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
