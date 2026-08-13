/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibapti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 20:28:07 by guibapti          #+#    #+#             */
/*   Updated: 2026/07/26 20:57:40 by guibapti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size -1)
	{
		if (tab[i] > tab[i +1])
		{
			temp = tab[i];
			tab[i] = tab[i +1];
			tab[i +1] = temp;
			i = 0;
		}
		else
			i++;
	}
}
/*
int main()
{
	int	tab[5] = {5, 2, 4, 1, 3};
	int	size = 5;
	int	i;
	char	out;

	ft_sort_int_tab(tab, size);

	i = 0;
	while (i < size)
	{
		out = '0' + tab[i];
		write(1, &out, 1);
		i++;
	}

	return(0);
}*/
