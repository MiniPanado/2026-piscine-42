/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibapti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 19:17:00 by guibapti          #+#    #+#             */
/*   Updated: 2026/07/26 20:25:22 by guibapti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	temp;

	i = 0;
	f = size -1;
	while (i < f)
	{
		temp = tab[i];
		tab[i] = tab [f];
		tab [f] = temp;
		i++;
		f--;
	}
}
/*
int main(void)
{
	int	tab[5];
	int	i;
	char	out;

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;

	ft_rev_int_tab(tab, 5);

	i = 0;
	while (i < 5)
	{
		out = '0' + tab[i];
		write(1, &out, 1);
		write(1, " ", 1);
		i++;
	}

	return(0);
}*/
