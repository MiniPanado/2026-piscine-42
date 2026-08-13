/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanotil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:30:04 by ecanotil          #+#    #+#             */
/*   Updated: 2026/08/04 19:24:14 by ecanotil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long	min_l;
	long	max_l;
	long	nrange;
	long	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	min_l = min;
	max_l = max;
	nrange = max_l - min_l;
	*range = malloc(nrange * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (min_l < max_l)
	{
		(*range)[i] = min_l;
		min_l++;
		i++;
	}
	return ((int)nrange);
}
/*
int	main(void)
{
	int *empty;
	int n;
	int i;
	
	n = ft_ultimate_range(&empty, -5, 5);
	printf("%d\n", n);
	if (n > 0)
    	{
        	i = 0;
        	while (i < n)
        	{
            		printf("%d ", empty[i]);
            		i++;
        	}
		printf("\n");
    	}
    	return (0);
}
*/
