/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:05:03 by lucerque          #+#    #+#             */
/*   Updated: 2026/07/25 17:15:47 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	x;

	x = nb;
	if (x < 0)
	{
		write(1, "-", 1);
		x = -x;
	}
	if (x >= 10)
	{
		ft_putnbr(x / 10);
	}
	write(1, &"0123456789"[x % 10], 1);
}

/*#include <limits.h>
int	main(void)
{
	ft_putnbr(INT_MAX);
	write(1, "\n", 1);
	ft_putnbr(INT_MIN);
	write(1, "\n", 1);
	ft_putnbr(42);
}*/
