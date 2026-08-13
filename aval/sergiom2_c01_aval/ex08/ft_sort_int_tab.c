/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergiom2 <sergiom2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 13:29:31 by sergiom2          #+#    #+#             */
/*   Updated: 2026/07/27 10:23:10 by sergiom2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < (size - 1))
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

/*void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5];
	int	i;

	tab[0] = 10;
	tab[1] = 2;
	tab[2] = 30;
	tab[3] = 4;
	tab[4] = 50;
	ft_sort_int_tab(tab, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
