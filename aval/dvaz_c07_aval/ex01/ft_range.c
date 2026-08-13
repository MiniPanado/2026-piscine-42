/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaz <dvaz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 14:59:46 by dvaz              #+#    #+#             */
/*   Updated: 2026/08/13 12:40:06 by dvaz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*len;

	if (min >= max)
		return (NULL);
	len = malloc((max - min) * sizeof(int));
	if (!len)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		len[i] = min + i;
		i++;
	}
	return (len);
}
/*
int main()
{
	int *len;
	int i;

	len = ft_range(0, 10);
	i = 0;
	while (i < 10)
	{
		printf("%d\n", len[i]);
		i++;
	}
}
*/