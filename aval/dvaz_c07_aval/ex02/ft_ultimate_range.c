/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 17:30:11 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/13 12:40:30 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = malloc(sizeof(int) * len);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (len);
}
/*
int main(void)
{
	int	*range;
	int	min;
	int	max;
	int	i;

	min = -24;
	max = 32;
	i	= 0;
	printf("Size: %d\n", ft_ultimate_range(&range, min, max));
	while (i < (max - min))
	{
		printf("%d ", range[i]);
		i++;
	}
}
*/