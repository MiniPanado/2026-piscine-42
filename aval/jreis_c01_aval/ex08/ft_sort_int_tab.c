/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 09:58:07 by jreis             #+#    #+#             */
/*   Updated: 2026/07/27 10:01:00 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1] && i < size - 1)
		{
			j = size - 1 - i;
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

// int	main(void)
// {
// 	int	i;
// 	int	tab[6];
// 	int	size;

// 	tab[0] = 6;
// 	tab[1] = 8;
// 	tab[2] = 3;
// 	tab[3] = 4;
// 	tab[4] = 9;
// 	tab[5] = 5;
// 	size = 6;
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_sort_int_tab(&tab[0], size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// }
