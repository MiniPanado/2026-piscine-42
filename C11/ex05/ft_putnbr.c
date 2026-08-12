/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 00:39:44 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 03:20:05 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

static void	ft_putnbr_recursive(unsigned int num)
{
	if (num >= 10)
	{
		ft_putnbr_recursive(num / 10);
	}
	write(1, &"0123456789"[num % 10], 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	num;

	if (nb < 0)
	{
		write(1, "-", 1);
		num = -(unsigned int)nb;
	}
	else
	{
		num = (unsigned int)nb;
	}
	ft_putnbr_recursive(num);
}
