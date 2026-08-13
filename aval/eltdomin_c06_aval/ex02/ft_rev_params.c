/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltdomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 12:23:35 by eltdomin          #+#    #+#             */
/*   Updated: 2026/08/13 20:18:58 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = 1;
	b = 0;
	if (argc < 2)
		return (0);
	while (a < argc)
	{
		while (argv[argc - a][b])
		{
			write(1, &argv[argc - a][b], 1);
			b++;
		}
		write(1, "\n", 1);
		b = 0;
		a++;
	}
}
