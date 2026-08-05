/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 20:31:14 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/05 20:31:17 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	const size_t	size = max - min;
	size_t			i;

	if (range == NULL)
	{
		return (-1);
	}
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		*(*range + i) = (min + i);
		i++;
	}
	return (size);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	int	*range;
	if (argc != 3)
	{
		printf("You need to pass 2 arguments (Min and Max)!\n");
		return (1);
	}
	int min = atoi(argv[1]);
	int max = atoi(argv[2]);
	int ret = ft_ultimate_range(&range, min, max);
	if (!range)
	{
		printf("Min can't be greater than max\n");
		return (1);
	}
	int size = abs(max - min);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", range[i]);
	}
	printf("\nTotal of Numbers: %d\n", ret);
	free(range);
}*/
