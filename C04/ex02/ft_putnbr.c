/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 01:37:05 by lucerque          #+#    #+#             */
/*   Updated: 2026/07/31 01:02:18 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// -(unsigned int)nb is equal to (2^32 - nb) % 2^32

static void	ft_putnbr_recursive(unsigned int nb)
{
	if (nb >= 10)
	{
		ft_putnbr_recursive(nb / 10);
	}
	write(1, &"0123456789"[nb % 10], 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	number;

	if (nb < 0)
	{
		write(1, "-", 1);
		number = -(unsigned int)nb;
	}
	else
	{
		number = (unsigned int)nb;
	}
	ft_putnbr_recursive(number);
}
