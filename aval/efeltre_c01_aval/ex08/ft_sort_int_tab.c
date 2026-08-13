/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efeltre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 13:59:42 by efeltre           #+#    #+#             */
/*   Updated: 2026/08/05 14:06:39 by efeltre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
// int main(void)
// {
//     int tab[] = {5, 2, 9, 1, 5, 6};
//     int i;
//     printf("Antes: ");
//     i = 0;
//     while (i < 6)
//     {
//         printf("%d ", tab[i]);
//         i++;
//     }
//     printf("\n");
//     ft_sort_int_tab(tab, 6);
//     printf("Depois: ");
//     i = 0;
//     while (i < 6)
//     {
//         printf("%d ", tab[i]);
//         i++;
//     }
//     printf("\n");
//     return (0);
// }