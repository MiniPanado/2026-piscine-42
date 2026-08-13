/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 12:42:59 by mravara           #+#    #+#             */
/*   Updated: 2026/07/23 16:29:12 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	num;
	char	c;

	num = nb;
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		c = (num % 10) + '0';
		write(1, &c, 1);
	}
	else
	{
		c = num + '0';
		write(1, &c, 1);
	}
}

 int	main(void)
 {
 	ft_putnbr(42);
 	write(1, "\n", 1);
 	ft_putnbr(-42);
 	write(1, "\n", 1);
 	ft_putnbr(0);
 	write(1, "\n", 1);
 	ft_putnbr(2147483647);
 	write(1, "\n", 1);
 	ft_putnbr(-2147483648);
 	write(1, "\n", 1);
 }
