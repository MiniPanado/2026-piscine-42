/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 10:49:36 by lucerque          #+#    #+#             */
/*   Updated: 2026/07/25 17:07:24 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;
	int	first;

	first = 1;
	n1 = -1;
	while (++n1 <= 98)
	{
		n2 = n1;
		while (++n2 <= 99)
		{
			if (!first)
			{
				write(1, ", ", 2);
			}
			ft_putchar((n1 / 10) + '0');
			ft_putchar((n1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((n2 / 10) + '0');
			ft_putchar((n2 % 10) + '0');
			first = 0;
		}
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
