/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 20:26:21 by lucerque          #+#    #+#             */
/*   Updated: 2026/07/25 16:40:54 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;
	int		first;

	first = 1;
	n1 = '0' - 1;
	while (++n1 <= '7')
	{
		n2 = n1;
		while (++n2 <= '8')
		{
			n3 = n2;
			while (++n3 <= '9')
			{
				if (!first)
					write(1, ", ", 2);
				write(1, &n1, 1);
				write(1, &n2, 1);
				write(1, &n3, 1);
				first = 0;
			}
		}
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/
