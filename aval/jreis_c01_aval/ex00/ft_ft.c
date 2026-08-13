/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 18:55:47 by jreis             #+#    #+#             */
/*   Updated: 2026/07/23 19:23:39 by jreis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*int	main(void)
{
	int	n;
	int	*nbr;

	n = 5;
	nbr = &n;
	printf("Before %d\n", *nbr);
	ft_ft(nbr);
	printf("After %d\n", *nbr);
	return (0);
}*/
