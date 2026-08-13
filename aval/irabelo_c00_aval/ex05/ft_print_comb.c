/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabelo <irabelo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 17:17:38 by irabelo           #+#    #+#             */
/*   Updated: 2026/08/13 14:23:22 by irabelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				write(STDOUT_FILENO, &x, 1);
				write(STDOUT_FILENO, &y, 1);
				write(STDOUT_FILENO, &z, 1);
				if (x != '7')
					write(STDOUT_FILENO, ", ", 2);
				z++;
			}
			y++;
		}
		x++;
	}
}
