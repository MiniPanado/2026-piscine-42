/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanotil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 14:02:23 by ecanotil          #+#    #+#             */
/*   Updated: 2026/08/11 21:05:33 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		*array;
	long	interval;
	long	min1;
	long	max1;
	long	index;

	min1 = min;
	max1 = max;
	if (min >= max)
		return (NULL);
	interval = max1 - min1;
	array = malloc(interval * sizeof(int));
	if (!array)
		return (NULL);
	index = 0;
	while (min1 < max1)
	{
		array[index] = min1;
		min1++;
		index++;
	}
	return (array);
}

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int	main(void)
{
	size_t	i;

	int *array = ft_range(INT_MIN - 100000, INT_MAX);

	i = 0;
	while (i < 2147 * 2)
	{
		printf("%d ",array[i]);
		i++;
	}
}

