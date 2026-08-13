/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efeltre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 13:53:04 by efeltre           #+#    #+#             */
/*   Updated: 2026/08/05 13:53:35 by efeltre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

// int main(void)
// {
//     int tab[] = {1, 2, 3, 4, 5, 6};
//     int i;
//     ft_rev_int_tab(tab, 6);
//     i = 0;
//     while (i < 6)
//     {
//         printf("%d ", tab[i]);
//         i++;
//     }
//     return (0);
// }
