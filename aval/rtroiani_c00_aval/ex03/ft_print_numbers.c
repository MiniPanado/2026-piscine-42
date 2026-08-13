/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtroiani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:46:17 by rtroiani          #+#    #+#             */
/*   Updated: 2026/07/29 17:52:12 by rtroiani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		n;
	char	c;

	n = 0;
	while (n <= 9)
	{
		c = n + '0';
		write(1, &c, 1);
		n++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
