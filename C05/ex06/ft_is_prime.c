/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 19:40:20 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/03 19:43:57 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
	{
		return (0);
	}
	if (nb <= 3)
	{
		return (1);
	}
	if (nb % 2 == 0 || nb % 3 == 0)
	{
		return (0);
	}
	i = 5;
	while (i <= nb / i)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
		{
			return (0);
		}
		i += 6;
	}
	return (1);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("\n");
		return (1);
	}
	for (char **av = argv + 1; *av != NULL; av++)
	{
		printf("Argument %d\n", ft_is_prime(atoi(*av)));
	}
}*/
