/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucerque <lucerque@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 00:39:44 by lucerque          #+#    #+#             */
/*   Updated: 2026/08/12 01:06:50 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	if (!tab || !f || length <= 0)
		return ;
	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

/*#include <stdio.h>
#include <unistd.h>

static void	ft_putnbr(int nb)
{
	unsigned int num;

	num = (nb < 0) ? -(unsigned int)nb : (unsigned int)nb;
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	write(1, &"0123456789"[num % 10], 1);
	write(1, " ", 1);
}

static void	ft_putnbr2(int nb)
{
	unsigned int num;

	num = (nb < 0) ? -(unsigned int)nb : (unsigned int)nb;
	num += 1;
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	write(1, &"0123456789"[num % 10], 1);
	write(1, " ", 1);
}

int	main(void)
{
	int		tab[] = {1, 2, 3, 4, 5};
	size_t	size = sizeof(tab) / sizeof(tab[0]); 

	write(1, "----------------------------\nOg: ", 34);
	for (size_t i = 0; i < size; i++)
	{
		ft_putnbr(tab[i]);
	}
	write(1, "\n----------------------------\nNew: ", 35);
	ft_foreach(tab, size, ft_putnbr2);
	write(1, "\n----------------------------\n", 30);
}*/
