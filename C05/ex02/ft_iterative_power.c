/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:51:11 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/03 19:05:06 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
	{
		return (0);
	}
	res = 1;
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	printf("%d %d\n", (int)pow(x, y), ft_iterative_power(x, y));
	return (0);
}*/
