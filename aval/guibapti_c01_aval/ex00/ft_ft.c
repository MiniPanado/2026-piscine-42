/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guibapti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 18:53:19 by guibapti          #+#    #+#             */
/*   Updated: 2026/07/25 19:13:31 by guibapti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int		num;
	char	o;

	num = 0;
	ft_ft(&num);
	o = '0' + (num / 10);
	write(1, &o, 1);
	o = '0' + (num % 10);
	write(1, &o, 1);
}
	*/
/*
#include <unistd.h>

void	ft_ultimate_ft(int **nbr)
{
	**nbr = 42;
}

int	main(void)
{
	int		num;
	int		*p1;
	int		**p2;
	char	o;

	num = 0;
	p1 = &num;
	p2 = &p1;
	ft_ultimate_ft(p2);
	o = '0' + (num / 10);
	write(1, &o, 1);
	o = '0' + (num	% 10);
	write(1, &o, 1);
}*/