/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltdomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 12:18:00 by eltdomin          #+#    #+#             */
/*   Updated: 2026/08/13 20:18:29 by lucerque         ###   ########.fr       */
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
		while (argv[a][b])
		{
			write(1, &argv[a][b], 1);
			b++;
		}
		write(1, "\n", 1);
		b = 0;
		a++;
	}
}
